  int led1=2;
       int led2=3;
       int led3=4;
       int led4=5;
       int xPin = A1;
       int yPin = A0;
       int butonPin = A2;
       int xPoz = 0;
       int yPoz = 0;
       int butonDurum = 0;
       void setup() {
         Serial.begin(9600);
       pinMode(xPin, INPUT);
       pinMode(yPin, INPUT);
       pinMode(butonPin, INPUT_PULLUP);
       }
       void loop() {
         xPoz = analogRead(xPin);
       yPoz = analogRead(yPin);
       butonDurum = digitalRead(butonPin);
       if (xPoz>0 && xPoz<450)
       { digitalWrite(led1,HIGH);   delay (250);
       }

       if (xPoz>650 && xPoz<1023) {
  digitalWrite(led2,HIGH);delay (250);
}
if (yPoz>0 && yPoz<450) {
  digitalWrite(led3,HIGH); delay (250);
}

delay (250);

 if (yPoz>650 && yPoz<1023 ) {
  digitalWrite(led4,HIGH);  delay (250);
}
if (butonDurum == 0) {
  digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led4,HIGH);
delay (250);
}
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
digitalWrite(led4,LOW);
}
