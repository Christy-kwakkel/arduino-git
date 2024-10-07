#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

// the setup function runs once when you press reset or power the board

int ledPin = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second
}


// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}