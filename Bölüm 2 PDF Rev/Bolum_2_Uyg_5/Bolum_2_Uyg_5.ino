const int butonPin = 2;
const int led1 =  4;
const int led2 = 5;
const int led3 =  6;
const int led4 = 7;
int say=0;
int durum = 0;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(butonPin, INPUT);
}
void loop() {
  durum = digitalRead(butonPin);

if (durum == HIGH) {
   delay(200);    say=say+1;
if (say==1)    {digitalWrite(4,HIGH);
}
if (say==2) {
  digitalWrite(5,HIGH);
}
if (say==3) {
  digitalWrite(6,HIGH);
}
if (say==4) {
  digitalWrite(7,HIGH);
}
if (say==5) {
  say=0;digitalWrite(7,LOW);
           digitalWrite(6,LOW);
           digitalWrite(4,LOW);
           digitalWrite(5,LOW);
} }}
  
