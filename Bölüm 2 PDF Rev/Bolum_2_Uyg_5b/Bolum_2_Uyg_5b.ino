
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
   delay(200);
    say=say+1;
}
switch(say) {
  case 1: digitalWrite(4,HIGH);
  break;
    case 2: digitalWrite(5,HIGH);
  break;
    case 3: digitalWrite(6,HIGH);
  break;
    case 4: digitalWrite(7,HIGH);
  break;
    case 5: say=0;
  digitalWrite(7,LOW);digitalWrite(6,LOW);
    digitalWrite(4,LOW);digitalWrite(5,LOW); }  }
