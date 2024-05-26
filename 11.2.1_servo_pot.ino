void setup() {
Serial.begin(9600); //serial port initialised with baud rate 9600
}
void loop() {
int thermistorvalue = analogRead(A0); //read pin A0
float v = thermistorvalue * 5.0 / 1024; // voltage calculation
 // Calculate resistance value of thermistor
float Rt = 10 * v / (5 - v);
 // Calculate temperature (Kelvin)
float tempK = 1 / (log(Rt / 10) / 3950 + 1 / (273.15 + 25));
 // Calculate temperature (Celsius)
 float tempC = tempK - 273.15;
 // Send the result to computer through serial port
 Serial.print("Current temperature is: ");
 Serial.print(tempK);
 Serial.print(" K, ");
 Serial.print(tempC);
 Serial.println(" C");
 delay(500);
}
