#define Do 131
      #define Re 147
       #define Mi 165
       #define Fa 175
       #define Sol 196
      #define La 220
#define Si 247
#define Do2 262
int tonePin =10;
void setup() {
  pinMode(tonePin, OUTPUT);
}
void loop() {
  tone(tonePin, Do, 500 );  delay(500);
  tone(tonePin, Re, 500 );delay(500);
tone(tonePin, Mi, 500 );delay(500);
tone(tonePin, Fa, 500 );delay(500);
tone(tonePin, Sol, 500 );delay(500);
tone(tonePin, La, 500 );delay(500);
tone(tonePin, Si, 500 );delay(500);
tone(tonePin, Do2, 500 );delay(500);}
