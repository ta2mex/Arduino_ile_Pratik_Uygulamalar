 int tutmaPin = 11;
      int kaydirmaPin = 12;
      int bilgiPin = 4;
byte ledler = 0;
void setup() {
  pinMode(tutmaPin, OUTPUT);
  pinMode(bilgiPin, OUTPUT);
  pinMode(kaydirmaPin, OUTPUT);
}
void loop() {
  ledler = 0;
  kaydet();
  delay(500);
  for (int i = 0; i < 8; i++)
  {
    bitSet(ledler, i);
    kaydet();
    delay(500);
}
for (int i = 8; i >= 0; i--) {
  bitClear(ledler, i);
kaydet();
    delay(500);
}}
void kaydet() {
  digitalWrite(tutmaPin, LOW);
   shiftOut(bilgiPin, kaydirmaPin, LSBFIRST, ledler);
   digitalWrite(tutmaPin, HIGH);
}
