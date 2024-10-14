// Libraries
#include <Arduino.h>

const int ledPin = LED_BUILTIN;    // the number of the LED pin
int ledState = LOW;                // ledState used to set the LED
unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 1000;        // interval at which to blink (milliseconds)

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
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  blink();
  menu();
}

void blink()
{
  // if the difference between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) 
  {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    // if the LED is OFF turn it ON and vice-versa:
    if (ledState == LOW) 
    {
      ledState = HIGH;
    } else 
    {
      ledState = LOW;
    }
    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
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
  if(input != 1 && input != 2)
  {
    Serial.println("Please choose 1 or 2");
    return;
  }
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