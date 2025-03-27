/**
 * 
 * Blink an extern LED and read a potentiometer value
 * 
 */
#include "Arduino.h"

#ifndef LED_BUILTIN
#define LED_BUILTIN 13
#endif

#define LED_EXTERNAL_BLUE 16
#define POTENTIOMETER_PIN A1

void setup()
{
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  Serial.println("Hello, nrf52!");

  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_EXTERNAL_BLUE, OUTPUT);
  pinMode(POTENTIOMETER_PIN, INPUT);

}

void loop()
{
  Serial.print("On at: ");
  Serial.println(millis());

  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LED_EXTERNAL_BLUE, HIGH);

  // wait for a second
  delay(1000);

  Serial.print("Off at: ");
  Serial.println(millis());

  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(LED_EXTERNAL_BLUE, LOW);

  //Read the potentiometer value and then map it to a range of 0.0 to 1.0
  int potValue = analogRead(POTENTIOMETER_PIN);
  float mappedValue = map(potValue, 0, 1023, 0, 100) / 100.0;
  Serial.print("Potentiometer value: ");
  Serial.println(mappedValue);

   // wait for a second
  delay(1000);
}