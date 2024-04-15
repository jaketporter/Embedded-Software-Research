// set pin numbers:
int redled = 3; // the number of the LED1 pin
int yellowled = 7; // the number of the LED2 pin
void setup() {
 // initialize the LED pin as an output:
 pinMode(redled, OUTPUT);
 pinMode(yellowled, OUTPUT);
}
void loop() {
 setLed(1, 0); // set LED1 on, and LED2 off.
 setLed(0, 1); // set LED1 off, and LED2 on.
}
void setLed(int led1, int led2) {
 digitalWrite(redled, led1); // the state of LED1 is determined by variable led1.
 digitalWrite(yellowled, led2); // the state of LED2 is determined by variable led2.
 delay(500); // wait for 0.5 seconds
}
