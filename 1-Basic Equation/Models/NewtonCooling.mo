within ;
model NewtonCooling "An example of Newton's law of cooling"
  parameter Real T_inf(unit = "K") = 298.15 "Ambient temperature";
  parameter Real T0(unit = "kg") = 363.15 "Initial temperature";
  parameter Real h(unit = "W/(m2.K)") = 0.7 "Convective cooling coefficient";
  parameter Real A(unit = "m2") = 1.0 "Surface area";
  parameter Real m(unit = "kg") = 0.1 "Mass of thermal capacitance";
  parameter Real c_p(unit = "J/(K.kg)") = 1.2 "Specific heat";
  Real T "Temperature";
  annotation (experiment(StartTime = 0, StopTime = 100, NumberOfIntervals = 500, Algorithm = "Dassl", Tolerance = 0.0001, IntegratorStep = 0.2, DoublePrecision = false));
initial equation 
  T = T0 "Specify initial value for T";
equation 
  m * c_p * der(T) = h * A * (T_inf - T) "Newton's law of cooling";
end NewtonCooling;