#include <LiquidCrystal.h>  //Kütüphane dosyası ekleniyor.
LiquidCrystal LCD(12,11,5,4,3,2);//LCD’nin hangi pinleri kullanacağı
                                 //açıklanıyor
#define trigPin 9     //Mesafe sensörü için kullanılacak
#define echoPin 8     //pinler belirleniyor.
void setup() {
 pinMode(trigPin, OUTPUT);// Arduino için giriş/çıkış bacakları
 pinMode(echoPin, INPUT);  //belirleniyor.
 LCD.begin(16,2);   //LCD tanımlanıyor ve çalıştırılıyor.
 LCD.setCursor(0,0);//Ekranın neresine yazı yazılacağı
                    //tespit ediliyor.
 LCD.print("#Arduino ve Pic");//Ekarana veri gönderiliyor.
}
void loop() {
  LCD.setCursor(0,0);
 LCD.print("Hc-sr04 ve Engel ");
  long duration, distance; //Mesafe tanımı yapılıyor
 digitalWrite(trigPin, LOW);//trigPin’e 0 bilgisi gönderiliyor.
 delayMicroseconds(2);//2 micro saniye bekleme komutu.
 digitalWrite(trigPin, HIGH);//trigPin’e 1 bilgisi gönderiliyor.
 delayMicroseconds(10);//10 micro saniye bekleme komutu.
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);//Süre hesaplanıyor.
 distance = (duration/2) / 29.1;//Süreden mesafe hesaplanır.
LCD.setCursor(0,1); //LCD üzerinden gösterilecek
                    //mesafe bilgisi burda
 LCD.print(" ");    //hazırlanır. ve gösterilir
 LCD.setCursor(0,1);
 LCD.print("Mesafesi ");
 LCD.setCursor(9,1);
 LCD.print(distance);
 LCD.print(" cm");
 delay(750);
 LCD.clear() ;
}
