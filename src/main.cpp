// Libraries
#include <Arduino.h>

// Constants
#define LEDPIN 13

// Global variables
float number1;
float number2;

// Function declaration
float multiplication(float number1, float number2);
void getNumbers();
void blink();
void menu();

void setup() 
{
  Serial.begin(9600); // Start the Serial monitor
}

void loop() 
{
  blink();
  menu();
}

void blink()
{
  // digitalWrite(LEDPIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  // delay(100);                      // wait for a second
  // digitalWrite(LEDPIN, LOW);   // turn the LED off by making the voltage LOW
  // delay(500); 
}


void menu()
{
  // Prompt the user for calculate of multiplication
  Serial.println("1(calculate sum) or 2(multiplication)? ");
  while (Serial.available() <= 0)
  {
    blink();
  }
  int input = Serial.parseInt();
  getNumbers();

  if (input == 1)
  {
    //function calculation
    Serial.println("1");
    input = 0;
  }

  // Go to multiplication function and print out the result, resetting all inputs after
  if (input == 2)
  {
    float result = multiplication(number1, number2);
    input = 0;
    Serial.println(result);
    number1, number2 = 0;
  }
}

void getNumbers()
{
    //Validate and get first input
    while (number1 == 0)
    {
      Serial.print("Input the first number: ");
      while (Serial.available() <= 0)
      {
        blink();
      }
      number1 = Serial.parseFloat();
    } 
    
    //Validate and get second input
    while (number2 == 0)
    {
      Serial.print("Input the second number: ");
      while (Serial.available() <= 0)
      {
        blink();
      }
      number2 = Serial.parseFloat();
    } 
}

float multiplication(float number1, float number2)
{
  return number1 * number2;
}