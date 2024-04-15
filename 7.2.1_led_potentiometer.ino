int adcValue; // Define a variable to save ADC value
float voltage; // Define a variable to save the calculated voltage value
int ledpin = 11;
int ledvalue;
void setup() {
 pinMode (ledpin, OUTPUT);
 Serial.begin(9600); // Initialize the serial port and set the baud rate to 9600
 
}
void loop() {
 adcValue = analogRead(A0); // Convert analog of pin A0 to digital
 voltage = adcValue * (5.0 / 1023.0);// Calculate voltage according to digital
 // Send the result to computer through serial
 Serial.print("convertValue:");
 Serial.println(adcValue);
 Serial.print("Voltage:");
 Serial.println(voltage);
ledvalue = adcValue/ 4;
 analogWrite (ledpin, constrain(ledvalue,0, 255));
 delay(500);
}
