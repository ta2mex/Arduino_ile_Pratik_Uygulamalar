int KPin = 3;
int YPin = 5;
int MPin = 6;
int zm = 1500;
void setup() {
 pinMode(KPin, OUTPUT);
 pinMode(YPin, OUTPUT);
 pinMode(MPin, OUTPUT);
}
void loop() {
 renkCesidi(255, 0, 0);
 delay(zm);
 renkCesidi(0, 255, 0);
 delay(zm);
 renkCesidi(0, 0, 255);
 delay(zm);
 renkCesidi(255, 255, 0);
 delay(zm);
 renkCesidi(255, 0, 255);
 delay(zm);
 renkCesidi(0, 255, 255);
 delay(zm);
 renkCesidi(0, 0, 0);
 delay(zm);
}
void renkCesidi(int kirmizi, int yesil, int mavi) {
 kirmizi = 255 - kirmizi;
 yesil = 255 - yesil;
 mavi = 255 - mavi;
 analogWrite(KPin, kirmizi);
 analogWrite(YPin, yesil);
 analogWrite(MPin, mavi);
}
