/**
 * Blink
 *
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */
#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

#define LED_EXTERNAL_BLUE 16

void setup()
{
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  Serial.println("Hello, nrf52!");

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_EXTERNAL_BLUE, OUTPUT);

}

void loop()
{
  Serial.print("On at");
  Serial.println(millis());

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED_EXTERNAL_BLUE, HIGH);

  // wait for a second
  delay(1000);

  Serial.print("Off at");
  Serial.println(millis());

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_EXTERNAL_BLUE, LOW);

   // wait for a second
  delay(1000);
}