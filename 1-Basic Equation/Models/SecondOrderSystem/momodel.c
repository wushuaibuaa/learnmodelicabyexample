/***********************************************************
*	momodel.c                                                   
*                                                           
*	  用于求解器的模型描述文件，其配合init.txt, para.mat      
*	和setting.txt文件与求解器实现完整的模型求解。             
*                                                           
*	  该文件由MWorks代码生成器CodeGenerator自动生成。         
*                                                           
*	  模型名称：SecondOrderSystem
*	  生成时间：2017-03-15 09:31:47
*                                                           
*	  苏州同元软控信息技术有限公司                            
*	           2005-2017
*                                                           
***********************************************************/

#include "model_block1.h"


#include "momodel_types.h"

MWS_MO_SECTION_NMPL_BEGIN(StructSection)
MWS_MO_SECTION_NMPL_END

MWS_MO_SECTION_BEGIN(ConstantSection)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(ParameterSection)
    R_[2] = 1;
    R_[5] = 0.4;
    R_[6] = 1.0;
    R_[7] = 11;
    R_[8] = 50;
    R_[9] = 0.2;
    R_[10] = 1.0;
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DependingSection)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(InitialSection)
    R_[12] = R_[2];
    R_[11] = R_[1];
    R_[14] = R_[4];
    R_[13] = R_[3];
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(ReinitSection)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionDP)
    /* 标量线性方程 (5, 0) */
    BEGIN_LINEAR_BLOCK(1)
    MoReal A[1] = {0};
    MoReal b[1] = {0};
    const char* const varname[] = {
        "der(omega2)", 
    0};
    x[0] = R_[18];
    b[0] = ((((R_[7] * (R_[11] + ((-1) * R_[12]))) + (R_[9] * (R_[13] + ((-1) * R_[14])))) + (((-1) * R_[8]) * R_[12])) 
      + (((-1) * R_[10]) * R_[14]));
    A[0] = R_[6];
    SolveTrivialLinear(A, "A", b, "b", x, varname, 5);
    CheckReturnValue();
    R_[18] = x[0];
    END_LINEAR_BLOCK

    /* 标量线性方程 (6, 0) */
    BEGIN_LINEAR_BLOCK(1)
    MoReal A[1] = {0};
    MoReal b[1] = {0};
    const char* const varname[] = {
        "der(omega1)", 
    0};
    x[0] = R_[17];
    b[0] = ((R_[7] * (R_[12] + ((-1) * R_[11]))) + (R_[9] * (R_[14] + ((-1) * R_[13]))));
    A[0] = R_[5];
    SolveTrivialLinear(A, "A", b, "b", x, varname, 6);
    CheckReturnValue();
    R_[17] = x[0];
    END_LINEAR_BLOCK

    R_[16] = R_[14];
    R_[15] = R_[13];
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionDI)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionDN)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionEP)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionEI)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionEN)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionIP)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionII)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionIN)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DummySection)
MWS_MO_SECTION_END

MWS_MO_SECTION_NMPL_BEGIN(StateSection)
    MWS_DECL_STATE("omega1",1,13,17,1);
    MWS_DECL_STATE("phi2",1,12,16,2);
    MWS_DECL_STATE("phi1",1,11,15,3);
    MWS_DECL_STATE("omega2",1,14,18,4);
MWS_MO_SECTION_NMPL_END

MWS_MO_SECTION_NMPL_BEGIN(PreSection)
MWS_MO_SECTION_NMPL_END

MWS_MO_SECTION_NMPL_BEGIN(EvalSection)
MWS_MO_SECTION_NMPL_END

MWS_BASE_PATH_MAP_BEGIN
    MWS_BASE_PATH_MAP_ITEM(">root<","");
MWS_BASE_PATH_MAP_END

MWS_MO_SECTION_NMPL_BEGIN(TotalSection)
    MoInteger sz1[] = {18,0,0,0,4,0,0};
    MoInteger sz2[] = {0,0,0,0,0};
    MoInteger sz3[] = {0,0,0,0,0,0,1};
    MoInteger sz4[] = {1,0,0,0,0};
    MWS_MODEL_TOTAL(sz1,sz2,sz3,sz4,model_guid);
MWS_MO_SECTION_NMPL_END

MWS_JACGCP_INFO_BEGIN()
MWS_JACGCP_INFO_END

MWS_EXTERNAL_INFO_BEGIN()
MWS_EXTERNAL_INFO_END


