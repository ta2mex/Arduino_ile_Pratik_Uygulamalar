int buton1 = 2;
int buton2 = 3;     
int butonDurumu1 = 0;
int butonDurumu2 = 0;
int zaman =5;
void setup() {
  for(int faz=4;faz<8;faz++)
  {  pinMode(faz,OUTPUT);
}

pinMode(buton1, INPUT);  
  pinMode(buton2, INPUT);
}

void loop() {
butonDurumu1= digitalRead(buton1);
   if (butonDurumu1 == HIGH)  {     
  digitalWrite(7, HIGH);   digitalWrite(6, LOW); 
  digitalWrite(5, LOW);    digitalWrite(4, LOW);   
  delay(zaman);   
  digitalWrite(7, LOW);    digitalWrite(6, HIGH); 
  digitalWrite(5, LOW);    digitalWrite(4, LOW);   
  delay(zaman);   
  digitalWrite(7, LOW);     digitalWrite(6, LOW); 
  digitalWrite(5, HIGH);    digitalWrite(4, LOW);   
  delay(zaman); 
  digitalWrite(7, LOW);     digitalWrite(6, LOW); 
  digitalWrite(5, LOW);     digitalWrite(4, HIGH);   
  delay(zaman);
}
else {
digitalWrite(4, LOW);
}
butonDurumu2 = digitalRead(buton2);
   if (butonDurumu2 == HIGH) {
digitalWrite(7, LOW);   digitalWrite(6, LOW); 
  digitalWrite(5, LOW);   digitalWrite(4, HIGH);   
  delay(zaman);   
  digitalWrite(7, LOW);   digitalWrite(6, LOW); 
  digitalWrite(5, HIGH);  digitalWrite(4, LOW);   
  delay(zaman);   
  digitalWrite(7, LOW);   digitalWrite(6, HIGH); 
  digitalWrite(5, LOW);   digitalWrite(4, LOW);   
  delay(zaman); 
  digitalWrite(7, HIGH);  digitalWrite(6, LOW); 
  digitalWrite(5, LOW);   digitalWrite(4, LOW);   
  delay(zaman);
}
else {
digitalWrite(7, LOW);
}}

