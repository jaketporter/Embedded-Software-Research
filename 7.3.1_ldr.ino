int convertValue; // Define a variable to save the ADC value
int ledPin = 11; // The number of the LED pin
int x = 0;
void setup() {
  Serial.begin(9600);
 pinMode(ledPin, OUTPUT); // Set ledPin into output mode
}
void loop() {
 convertValue = analogRead(A0); // Read analog voltage value of pin A0, and save
 Serial.println(convertValue);
// x = convertValue/100;
 Serial.print("x=");
 Serial.println(x);
 // Map analog to the 0-255 range, and works as ledPin duty cycle setting
 if (convertValue>700){
 analogWrite(ledPin, map(10, 0, 1023, 0, 255));
 }
 else
 analogWrite(ledPin, LOW);
 delay(500);
}
