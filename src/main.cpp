#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

// the setup function runs once when you press reset or power the board

int ledPin = 13;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
    Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
 
 


void loop()
{ 
  // Prompt the user for calculate of multiplication
  digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(100);                      // wait for a second
  digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a second

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
  }
}


// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}