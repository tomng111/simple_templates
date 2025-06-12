#include <Arduino.h>
#define led 13
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  Serial.println("LED AN");
  delay(1000);
  digitalWrite(led, LOW);
  Serial.println("LED AUS");
  delay(1000);
}
