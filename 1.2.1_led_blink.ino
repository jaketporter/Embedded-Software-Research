
void setup() {
 // initialize digital pins 3 and 7 as an outputs
 pinMode(3, OUTPUT);
 pinMode(7, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
 digitalWrite(3, HIGH); // turn the LED on (HIGH is the voltage level)
 digitalWrite(7, HIGH); // turn the LED on (HIGH is the voltage level)
 delay(1000); // wait for a second
 digitalWrite(3, LOW); // turn the LED off by making the voltage LOW
 digitalWrite(7, LOW); // turn the LED off by making the voltage LOW
 delay(1000); // wait for a second
}
