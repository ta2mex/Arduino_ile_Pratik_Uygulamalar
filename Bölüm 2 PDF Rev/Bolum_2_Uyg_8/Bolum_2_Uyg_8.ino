int xPin = A1;
int yPin = A2;
int butonPin = A0;
int xPozisyonu = 0;
int yPozisyonu = 0;
int butonDurum = 0;
void setup() {
  Serial.begin(9600);
pinMode(xPin, INPUT);
pinMode(yPin, INPUT);
pinMode(butonPin, INPUT_PULLUP);
}
void loop() {
xPozisyonu = analogRead(xPin);
yPozisyonu = analogRead(yPin);
 butonDurum = digitalRead(butonPin);
      Serial.print("X: ");
      Serial.print(xPozisyonu);
      Serial.print(" | Y: ");
      Serial.print(yPozisyonu);
      Serial.print(" | Buton: ");
      Serial.println(butonDurum);
      delay(1000);
}
