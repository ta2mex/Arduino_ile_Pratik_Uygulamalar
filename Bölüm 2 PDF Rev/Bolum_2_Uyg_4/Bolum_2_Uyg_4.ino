int trs = 10;
int deger=0;
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}
void loop() {
  for (deger =0;deger<127;deger++)
{
Serial.println(deger);
analogWrite(trs, deger );
delay(128-deger);
}
for (deger=127;deger>1;deger--) {
  Serial.println(deger);
analogWrite(trs, deger );
delay(deger);
}

 }
