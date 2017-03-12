#include <LiquidCrystal.h>
       LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
       int pin=8;
       void setup() {
         Serial.begin(9600);
        lcd.begin(16, 2);
       }
        void loop() {
        float sensor_volt;
          float RS_gas;
        float oran;
         int sensorValue = analogRead(A0);
         sensor_volt=(float)sensorValue/1024*5.0;
         RS_gas = (5.0-sensor_volt)/sensor_volt;
        // Benim ölçümümde R0 değeri 1,25 çıkmıştı
        oran = RS_gas/1.25;
                   lcd.clear();lcd.setCursor(0,0);
                   lcd.print("GAZ MiKTARI   ");
                   lcd.print(oran);
lcd.setCursor(0,1);
 lcd.print("SEViYESi ");
            lcd.print(oran);
 delay(1500);
if (oran <=25.0 && oran >=20)
        { digitalWrite(pin,LOW);
          lcd.clear();lcd.print("COK iYi ");
          delay(1500);
          }
if (oran <=20.0 && oran >=15)
        { digitalWrite(pin,LOW);
          lcd.clear();lcd.print("iYi ");
          delay(1500);
          }
      if (oran <=15.0 && oran >=10)
        { digitalWrite(pin,LOW);
          lcd.clear();lcd.print("NORMAL ");
          delay(1500);
          }
        if (oran <=10.0 && oran >=7)
        { digitalWrite(pin,HIGH);
        delay(250);
        digitalWrite(pin,LOW);
         delay(500);
          lcd.clear();lcd.print("YUKSEK ");
          delay(1500);
          }
          if (oran <=6.0 )
        { digitalWrite(pin,HIGH);
          lcd.clear();lcd.print("NORMAL ");
          delay(2500);
          }
          Serial.print("sensor_volt = ");
  Serial.println(sensor_volt);
  Serial.print("RS_oran = ");
  Serial.println(RS_gas);
  Serial.print("Rs/R0 = ");
  Serial.println(oran);
  Serial.print("\n\n");
  delay(1000);  }
