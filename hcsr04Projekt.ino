const int trig = 8;
const int echo = 7;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
}

void loop() {
  unsigned long dura;
  int dis;
  // From trig pin
  digitalWrite(trig,0);
  delayMicroseconds(2);
  digitalWrite(trig,1);
  delayMicroseconds(5);
  digitalWrite(trig,0);
  // Calculating
  dura = pulseIn(echo,HIGH);
  dis = int(dura/2/29.412);
  // Display
  Serial.print("Distance: ");
  Serial.print(dis);
  Serial.println(" cm");
  delay(200);
}
