int led1 =8;
int led2 =9;
int led3 =10;
int led4 =11;
int giris= A1;
int girdeg = 0;
void setup() {
  Serial.begin(9600);
pinMode(giris, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
}
void loop() {
  girdeg = analogRead(giris);
Serial.print("Giris Degeri: ");
Serial.println(girdeg);
if (girdeg>80 && girdeg<130)
                { digitalWrite(led1,HIGH);   delay (1000);
}
      if (girdeg>130 && girdeg<210) {
        digitalWrite(led2,HIGH);   delay (1000);
}
      if (girdeg>210 && girdeg<300) {
        digitalWrite(led3,HIGH);   delay (1000);
}
      if (girdeg>300 && girdeg<500 ) {
        digitalWrite(led4,HIGH);  delay (1000);
}
 digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      delay(400);
}
