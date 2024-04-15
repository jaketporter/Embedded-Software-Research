// set pin numbers:
int redledpin = 3; // the number of the LED1 pin
int yellowledpin = 7; // the number of the LED2 pin
void setup() {
 // initialize the LED pin as an output:
 pinMode(redledpin, OUTPUT);
 pinMode(yellowledpin, OUTPUT);
}
void loop() {
 setLed(1); // set LED1 on, and LED2 off.
 setLed(0); // set LED1 off, and LED2 on.
}
void setLed(int led1) {
 digitalWrite(redledpin, led1); // the state of LED1 is determined by variable led1.

 if (led1 == 1)
 digitalWrite(yellowledpin, 0); // the state of LED2 is determined by variable led1.
 else
 digitalWrite(yellowledpin, 1);
 delay(500); // wait for 0.5 seconds
}
