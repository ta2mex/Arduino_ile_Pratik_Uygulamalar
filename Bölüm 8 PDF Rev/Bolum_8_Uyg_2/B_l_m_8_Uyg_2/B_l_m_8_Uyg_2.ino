#include <LiquidCrystal.h> // Kütüphane dosyası eklenir. 
LiquidCrystal LCD(12, 11, 5, 4, 3, 2); // Arduino’nun hangi bacaklarının
  void setup() {
  LCD.begin(16, 2);
}
void loop() {
  int sensorValue = analogRead(A0);// Sensörden gelen veri
                                  // SensorValue değişkenine aktarılır.
 double dV = sensorValue;         // Double tipi dV isimli değişken
                                  // oluşturulup sensorValue
                                  // değişkenine atanır
 double se = (dV/1023)*100;       // Double tipi se isimli değişken
                                  // oluşturulur Bu oran
                                  // en yüksek “50” olabilir
 int seviye = se;                 // se isimli double değişken
                                  // int tipi değişkene dönüştürülür.
LCD.clear();                      // LCD komutları 
LCD.setCursor(0, 0);              // 
LCD.print("ISIK SEViYESi:");
LCD.print(seviye);
 LCD.print("%");
 LCD.setCursor(0, 1);
   if ((seviye >= 0) && (seviye <= 5))// if Süzgeci oluşturulur.
                                      // Burada 0-5 arası değerlede ne 
                                      // yapılacağı yazılmıştır.
 {  
LCD.print("COK KARANLIK");
}
else if ((seviye > 5) && (seviye <= 10)) {// 5-10 arası değerlede ne
                                          // yapılacağı yazılmıştır.
  LCD.print("KARANLIK");
}
else if((seviye>10)&&(seviye<=50)){ //10-50arasıdeğerlede
                                    // ne yapılacağı yazılmıştır.       
  LCD.print("AYDINLIK");
}
else {
  LCD.print("COK AYDINLIK");}// 10-50 arasında olmayan durumda
                              // ne olacağı yazılmıştır.

delay(500);}
