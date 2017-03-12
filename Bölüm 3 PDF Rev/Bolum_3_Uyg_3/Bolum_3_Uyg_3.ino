int Trig_Pin = 8;
int Echo_Pin = 9;
void setup() {
  Serial.begin (9600);
pinMode(Trig_Pin, OUTPUT);
pinMode(Echo_Pin, INPUT);
}
void loop() {
  long sure, mesafe;
digitalWrite(Trig_Pin, LOW);
delayMicroseconds(2);
digitalWrite(Trig_Pin, HIGH);
delayMicroseconds(10);
digitalWrite(Trig_Pin, LOW);
sure = pulseIn(Echo_Pin, HIGH);
mesafe = (sure/2) / 29.2;
Serial.print("Olculen Mesafe : ");
Serial.print(mesafe);
Serial.println(" cm");
delay(500);
}
