int led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char befehl = Serial.read();
    if(befehl == '1') digitalWrite(led, HIGH);
    else if(befehl == '0')  digitalWrite(led, LOW);
  }
}
