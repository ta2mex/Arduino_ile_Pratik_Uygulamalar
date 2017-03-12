int step_pin[] = {4, 5, 6, 7};
int pin_sayisi = 4;
int buton_pin1 = 2;
int buton_deger1 = 0;
int buton_basilma1 = 0;
void setup() {
  for (int i = 0 ; i < pin_sayisi ; i++)
    {  pinMode(step_pin[i], OUTPUT);
}
pinMode(buton_pin1, INPUT);
}
void loop() {
buton_deger1 = digitalRead(buton_pin1);
  if (buton_deger1 == HIGH)
  {
    for (int i = 0 ; i < pin_sayisi ; i++)
    {   if (buton_basilma1 % pin_sayisi == i)
            digitalWrite(step_pin[i], HIGH);
      else
            digitalWrite(step_pin[i], LOW);
}

buton_basilma1++;
    delay(100);
}  }

