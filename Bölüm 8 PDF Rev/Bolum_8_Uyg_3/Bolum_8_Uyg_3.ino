#include <LiquidCrystal.h>  //LCD ekran için kütüphane dosyası eklendi.
#include "DHT.h"            //DHT11 ısı ve nen sensörü için kütüphane dosyası eklendi
#define DHTPIN A0           //DHT11 için kullanılan giriş belirlendi.
#define DHTTYPE DHT11       //DHT sensör tipi belirlendi.              
DHT dht(DHTPIN, DHTTYPE);   //DHT üzerinden gelecek veri tipi belirlendi.                   
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //LCD’nin kullanacağı pinler belirlendi.
  void setup() {
  lcd.begin(16,2);      //LCD aktif edilip 16 sütun 2 satır olduğu bilgisi veriliyor.
 dht.begin();           //DHT aktif adiliyor
}
void loop() {
  delay(1000);                            
float h = dht.readHumidity();   //DHT’den gelen nem bilgisi float tipi “h” değişkenine            //aktarılıyor.
float t = dht.readTemperature();  //DHT’den gelen ısı bilgisi float tipi “t” değişkenine            //aktarılıyor.
 delay(1000); 
  lcd.clear();        //LCD önce temizlenerek, gönderilecek veri ayarlanır ve gönderilir.
  lcd.setCursor(0,0);
  lcd.print("NEM DEGERi= ");
  lcd.print(h);
  lcd.setCursor(0,1);
  lcd.print("ISI DEGERi= ");
  lcd.print(t);}

