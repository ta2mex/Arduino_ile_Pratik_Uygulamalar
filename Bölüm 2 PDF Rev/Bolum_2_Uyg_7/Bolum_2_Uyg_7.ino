int andeg =0;
       int deg=A0;
       void setup()
       {
         Serial.begin(9600);
  pinMode(13, OUTPUT);
  }
  void loop()
{
  andeg=analogRead(deg);
  Serial.println(andeg);
  delay (70);
  if (andeg<49)
  {
   digitalWrite(13,HIGH);
delay(10); }
else {
   digitalWrite(13,LOW);
  }
}

