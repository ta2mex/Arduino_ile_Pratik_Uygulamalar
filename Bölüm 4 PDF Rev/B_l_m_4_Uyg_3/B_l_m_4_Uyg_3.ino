#include "LedControl.h" // Kütüphane dosyasını ekleme
       LedControl lc=LedControl(12,11,10,2);//DIN,CLK,CS=Pinlerin bağlantıları
       unsigned long delaySure=1200;// Ekranlardaki bekleme süresi
       byte karakterSeti1A[] =// Oluşturulacak karakter setleri
{
   B00011000, // İlk harf  karakterSeti #1 (A Har )
   B00100100,
   B01000010,
   B11111111,
   B10000001,
   B10000001,
   B10000001,
   B10000001
};
byte karakterSeti1VE[] =
{
  B10001000,  // ikinci harf  karakterSeti #1 (VE Şekli)
  B10001000,
  B01010000,
  B00101111,
  B00001000,
  B00001111,
  B00001000,
  B00001111
};
 byte karakterSeti1P[] =
{
  B11111100, // üçüncü harf karakterSeti #1 (P Har )
  B10000010,
  B10000001,
  B10000010,
  B11111100,
  B10000000,
  B10000000,
  B10000000
};
void setup()
{
 lc.shutdown(0,false);
 lc.setIntensity(0,3);
 lc.clearDisplay(0);
// Ekranı çalıştırmalk için kullanılan komut
// Ekranın ışık seviye ayarı
// Ekranı temizler
}
 void skarakterSeti1A() //  A karakter dizisini çağıran alt program
 {
  for (int i = 0; i < 8; i++)
  {
lc.setRow(0,i,karakterSeti1A[i]); }}
void skarakterSeti1VE() // VE karakter dizisini çağıran alt program
{
  for (int i = 0; i < 8; i++)
  {
    lc.setRow(0,i,karakterSeti1VE[i]);
  }}
 void skarakterSeti1P()
{
  for (int i = 0; i < 8; i++) // P karakter dizisini çağıran alt program
  {
    lc.setRow(0,i,karakterSeti1P[i]);
  }}
void loop() {
    skarakterSeti1A();//A karakterini çağırma
    delay(delaySure);
    skarakterSeti1VE();//VE karakterini çağırma
    delay(delaySure);
    skarakterSeti1P();//P karakterini çağırma
    delay(delaySure);
   }
 
