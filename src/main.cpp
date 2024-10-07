#include <Arduino.h>

void setup() {
  Serial.begin(9600);

}

void loop() 
// Prompt the user for calculate of multiplication
  int input = 0;
   while (Serial.available() <= 0)
  {
    Serial.println("1(calculate sum) or 2(multiplication)? ");
    while (input  1 < || input > 2)
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

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}