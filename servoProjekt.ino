#include<Servo.h>
Servo motor;
int analogerPin = A0;
int position = 0;
void setup(){
  motor.attach(9);
  Serial.begin(9600);
}
void loop(){
  int wertablesung = analogRead(analogerPin);
  position = map(wertablesung, 0, 1023, 0, 180);
  motor.write(position);
}
