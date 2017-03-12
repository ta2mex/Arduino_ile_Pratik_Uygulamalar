#include <Wire.h>
#include <DS3231.h>
DS3231 clock;
RTCDateTime dt;
void setup()
{
  Serial.begin(9600);
  Serial.println("Initialize DS3231");;
  clock.begin();
}

void loop()
{
clock.forceConversion();
  Serial.print("SICAKLIK: ");
  Serial.println(clock.readTemperature());

  delay(1000);
}

