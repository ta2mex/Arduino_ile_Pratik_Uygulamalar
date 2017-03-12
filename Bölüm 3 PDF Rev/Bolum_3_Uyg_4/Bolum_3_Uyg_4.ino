#include <Wire.h>
#include <DS3231.h>
DS3231 clock;
RTCDateTime dt;
void setup()
{
  Serial.begin(9600);
  Serial.println("DS3231 Aktif Ediliyor");;
  clock.begin();
  clock.setDateTime(__DATE__, __TIME__);
}
void loop()
{
  dt = clock.getDateTime();
  Serial.print("Tarih Saat: ");
  Serial.print(dt.day);   Serial.print("-");
  Serial.print(dt.month);  Serial.print("-");
  Serial.print(dt.year);    Serial.print(" ");
  Serial.print(dt.hour);   Serial.print(":");
  Serial.print(dt.minute); Serial.print(":");
  Serial.print(dt.second); Serial.println("");
  delay(1000);
}

