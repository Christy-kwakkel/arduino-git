#include <Arduino.h>

const int ledPin = LED_BUILTIN;    // the number of the LED pin
int ledState = LOW;                // ledState used to set the LED
unsigned long previousMillis = 0;  // will store last time LED was updated
const long interval = 1000;        // interval at which to blink (milliseconds)

void setup() 
{
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() 
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