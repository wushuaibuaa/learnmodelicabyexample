within ;
model RLC1 "A resistor-inductor-capacitor circuit model"
  type Voltage = Real(unit = "V");
  type Current = Real(unit = "A");
  type Resistance = Real(unit = "Ohm");
  type Capacitance = Real(unit = "F");
  type Inductance = Real(unit = "H");
  parameter Voltage Vb = 24 "Battery voltage";
  parameter Inductance L = 1;
  parameter Resistance R = 100;
  parameter Capacitance C = 1e-3;
  Voltage V;
  Current i_L;
  Current i_R;
  Current i_C;
  annotation (experiment(StartTime = 0, StopTime = 5, NumberOfIntervals = 500, Algorithm = "Dassl", Tolerance = 0.0001, IntegratorStep = 0.01, DoublePrecision = false));
equation 
  V = i_R * R;
  C * der(V) = i_C;
  L * der(i_L) = (Vb - V);
  i_L = i_R + i_C;
end RLC1;