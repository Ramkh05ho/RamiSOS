/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/ramikhosho/RamiSOS/src/RamiSOS.ino"
void setup();
void loop();
#line 1 "/Users/ramikhosho/RamiSOS/src/RamiSOS.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
// setup() runs once, when the device is first turned on.
void setup()
{

  pinMode(D5, OUTPUT);
  pinMode(D4, OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop()
{
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(500);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(500);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(500);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(500);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(2000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
  delay(2000);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);
  delay(4000);
  digitalWrite(D4, LOW);
  digitalWrite(D5, LOW);
}