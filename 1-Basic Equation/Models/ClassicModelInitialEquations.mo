within ;
model ClassicModelInitialEquations "This is the typical equation-oriented model"
  parameter Real alpha = 0.1 "Reproduction rate of prey";
  parameter Real beta = 0.02 "Mortality rate of predator per prey";
  parameter Real gamma = 0.1 "Mortality rate of predator";
  parameter Real delta = 0.02 "Reproduction rate of predator per prey";
  parameter Real x0 = 10 "Initial prey population";
  parameter Real y0 = 10 "Initial predator population";
  Real x(start = x0) "Prey population";
  Real y(start = y0) "Predator population";
  annotation (
    experiment(StartTime = 0, StopTime = 100, NumberOfIntervals = 500, Algorithm = "Dassl", Tolerance = 0.0001, IntegratorStep = 0.2, DoublePrecision = false));
initial equation 
  x = x0;
  y = y0;
equation 
  der(x) = x * (alpha - beta * y);
  der(y) = y * (delta * x - gamma);
end ClassicModelInitialEquations;