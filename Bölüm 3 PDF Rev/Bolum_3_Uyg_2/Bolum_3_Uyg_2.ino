    #include "DHT.h"
#define DHTPIN 2
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
Serial.println("HaberlesmeBasladi");
dht.begin();
}
void loop() {
  delay(2000);
 float h = dht.readHumidity();
 float t = dht.readTemperature();
if (isnan(h) || isnan(t))
{
Serial.println("Veri okunamadi!");
return;
}
Serial.print("Nem: ");
Serial.print(h);
Serial.print(" %\t");
Serial.print("Sicaklik: ");
Serial.print(t);
Serial.print(" *C ");
Serial.print("\n");
}
