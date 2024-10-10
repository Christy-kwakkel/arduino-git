#include <Arduino.h>

float number1;
float number2;

// put function declarations here:
float multiplication(float number1, float number2);
void getNumbers();
const int ledPin = 13;
void setup() 
{
  Serial.begin(9600);
}


void loop() 
{
  // digitalWrite(ledPin, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(100);                      // wait for a second
  // digitalWrite(ledPin, LOW);   // turn the LED off by making the voltage LOW
  // delay(500); 

// Prompt the user for calculate of multiplication
  Serial.println("1(calculate sum) or 2(multiplication)? ");
  while (Serial.available() <= 0){}
  int input = Serial.parseInt();
  getNumbers();

  if (input == 1)
  {
    //function calculation
    Serial.println("1");
    input = 0;
  }

  if (input == 2)
  {
    // multiplication
    float result = multiplication(number1, number2);
    input = 0;
    Serial.println(result);
    number1, number2 = 0;
  }
}

void getNumbers()
{
    while (number1 == 0)
    {
      Serial.print("Input the first number: ");
      while (Serial.available() <= 0){}
      number1 = Serial.parseFloat();
    } 
    
    while (number2 == 0)
    {
      Serial.print("Input the second number: ");
      while (Serial.available() <= 0){}
      number2 = Serial.parseFloat();
    } 
}

float multiplication(float number1, float number2)
{
  return number1 * number2;
}