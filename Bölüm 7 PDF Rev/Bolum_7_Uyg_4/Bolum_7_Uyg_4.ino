int HC05;
       void setup()
       {
       Serial.begin(9600);
       for (int a=2;a<=13;a++)
       {
       pinMode(a,OUTPUT);
       }}
       void loop()
       {
       if(Serial.available())
       {
       int HC05 = Serial.read();
       delay(100);
if(HC05==65){digitalWrite(13,HIGH);}
if(HC05==97){digitalWrite(13,LOW);}
if(HC05==66){digitalWrite(3,HIGH);}
if(HC05==98){digitalWrite(3,LOW);}
if(HC05==67){digitalWrite(4,HIGH);}
if(HC05==99){digitalWrite(4,LOW);}
if(HC05==68){digitalWrite(5,HIGH);}
if(HC05==100){digitalWrite(5,LOW);}
if(HC05==69){digitalWrite(6,HIGH);}
if(HC05==101){digitalWrite(6,LOW);}
if(HC05==70){digitalWrite(7,HIGH);}
if(HC05==102){digitalWrite(7,LOW);}
if(HC05==71){digitalWrite(8,HIGH);}
if(HC05==103){digitalWrite(8,LOW);}
if(HC05==72){digitalWrite(13,HIGH);}
if(HC05==104){digitalWrite(13,LOW);}
Serial.print("Okunan Veri=");
Serial.println(HC05);
}}
