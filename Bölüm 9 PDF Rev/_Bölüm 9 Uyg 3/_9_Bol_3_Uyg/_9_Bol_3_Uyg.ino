int hm10veri;
void setup()
{
Serial.begin(9600);
}
void loop() {
if(Serial.available())
{
int hm10veri = Serial.read();
delay(100);
Serial.print("Okunan Veri=");
Serial.println(hm10veri);
}
}
