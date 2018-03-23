/***********************************************************
*	momodel.c                                                   
*                                                           
*	  用于求解器的模型描述文件，其配合init.txt, para.mat      
*	和setting.txt文件与求解器实现完整的模型求解。             
*                                                           
*	  该文件由MWorks代码生成器CodeGenerator自动生成。         
*                                                           
*	  模型名称：RLC1
*	  生成时间：2017-03-15 08:57:46
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
    R_[1] = 24;
    R_[2] = 1;
    R_[3] = 100;
    R_[4] = 1e-3;
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DependingSection)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(InitialSection)
    R_[6] = 0;
    R_[5] = 0;
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(ReinitSection)
MWS_MO_SECTION_END

MWS_MO_SECTION_BEGIN(DynamicSectionDP)
    /* 标量线性方程 (3, 0) */
    BEGIN_LINEAR_BLOCK(1)
    MoReal A[1] = {0};
    MoReal b[1] = {0};
    const char* const varname[] = {
        "der(i_L)", 
    0};
    x[0] = R_[10];
    b[0] = (R_[1] + ((-1) * R_[5]));
    A[0] = R_[2];
    SolveTrivialLinear(A, "A", b, "b", x, varname, 3);
    CheckReturnValue();
    R_[10] = x[0];
    END_LINEAR_BLOCK

    /* 标量线性方程 (4, 0) */
    BEGIN_LINEAR_BLOCK(1)
    MoReal A[1] = {0};
    MoReal b[1] = {0};
    const char* const varname[] = {
        "i_R", 
    0};
    x[0] = R_[7];
    b[0] = ((-1) * R_[5]);
    A[0] = ((-1) * R_[3]);
    SolveTrivialLinear(A, "A", b, "b", x, varname, 4);
    CheckReturnValue();
    R_[7] = x[0];
    END_LINEAR_BLOCK

    R_[8] = (R_[6] + ((-1) * R_[7]));
    /* 标量线性方程 (6, 0) */
    BEGIN_LINEAR_BLOCK(1)
    MoReal A[1] = {0};
    MoReal b[1] = {0};
    const char* const varname[] = {
        "der(V)", 
    0};
    x[0] = R_[9];
    b[0] = R_[8];
    A[0] = R_[4];
    SolveTrivialLinear(A, "A", b, "b", x, varname, 6);
    CheckReturnValue();
    R_[9] = x[0];
    END_LINEAR_BLOCK

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
    MWS_DECL_STATE("V",1,5,9,1);
    MWS_DECL_STATE("i_L",1,6,10,2);
MWS_MO_SECTION_NMPL_END

MWS_MO_SECTION_NMPL_BEGIN(PreSection)
MWS_MO_SECTION_NMPL_END

MWS_MO_SECTION_NMPL_BEGIN(EvalSection)
MWS_MO_SECTION_NMPL_END

MWS_BASE_PATH_MAP_BEGIN
    MWS_BASE_PATH_MAP_ITEM(">root<","");
MWS_BASE_PATH_MAP_END

MWS_MO_SECTION_NMPL_BEGIN(TotalSection)
    MoInteger sz1[] = {10,0,0,0,2,0,0};
    MoInteger sz2[] = {0,0,0,0,0};
    MoInteger sz3[] = {0,0,0,0,0,0,1};
    MoInteger sz4[] = {1,0,0,0,0};
    MWS_MODEL_TOTAL(sz1,sz2,sz3,sz4,model_guid);
MWS_MO_SECTION_NMPL_END

MWS_JACGCP_INFO_BEGIN()
MWS_JACGCP_INFO_END

MWS_EXTERNAL_INFO_BEGIN()
MWS_EXTERNAL_INFO_END


