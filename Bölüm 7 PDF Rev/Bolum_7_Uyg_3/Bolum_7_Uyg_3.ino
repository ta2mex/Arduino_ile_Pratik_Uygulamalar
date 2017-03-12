#include <SoftwareSerial.h>
      SoftwareSerial mySerial(10, 11);
      String BTADI = "ARDUINO VE PIC";
      int SiFRE = 1234;
      String uart = "9600,0,0";
      void setup() {
  Serial.begin(9600);
  Serial.println("AT Komutları Aktif Ediliyor.");
  delay(1000);
Serial.println("HC-05 modulun yanindaki kucuk butona basin ve bekleyin");
  delay(3000);
  mySerial.begin(9600);
  delay(5000);
  mySerial.print("AT+NAME=");
  mySerial.println(BTADI);
  Serial.print("Isim ayarlandi: ");
  Serial.println(BTADI);
  delay(1000);
  mySerial.print("AT+PSWD=");
  mySerial.println(SiFRE);
  Serial.print("SiFRE ayarlandi: ");
  Serial.println(SiFRE);
  delay(1000);
  mySerial.print("AT+UART=");
  mySerial.println(uart);
  Serial.print("Veri Gonderim Hizi: ");
  Serial.println(uart);
  delay(2000);
  Serial.println("Hazir");
}
void loop()
{
}
