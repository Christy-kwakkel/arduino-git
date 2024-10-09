#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);
const int ledPin = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(500); 
  
  
  int input = 0;
  while (Serial.available() <= 0)
  {
    Serial.println("1(calculate sum) or 2(multiplication)? ");
    while (input < 1  || input > 2)
    {
    }

    if (input == 1)
    {
      //function calculation
    }

    if (input == 2)
    {
      // multiplication
    }
  }                     // wait for a second
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}

float multiplication(float number1, float number2)
{
  return number1 * number2;
}