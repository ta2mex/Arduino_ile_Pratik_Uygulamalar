 #include <LiquidCrystal.h>
       LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
       void setup() {
         Serial.begin(9600);
         lcd.begin(16,2);
       }
        void loop() {
        float sensor_voltaj;
        float RS_air;
        float R0;
        float sensor_deg;
           for(int x = 0 ; x < 100 ; x++)
         {
           sensor_deg = sensor_deg + analogRead(A0);
         }
         sensor_deg = sensor_deg/100.0;
         sensor_voltaj = sensor_deg/1024*5.0;
         RS_air = (5.0-sensor_voltaj)/sensor_voltaj;
         R0 = RS_air/10.0;  //R0 değerini bulmak için formülde 10.0 böldük
         lcd.clear();
         lcd.setCursor(0,0);
         lcd.print("Sens.Volt. ");
         lcd.print(sensor_voltaj);
         lcd.print("V");
         lcd.setCursor(0,1);
         lcd.setCursor(0,1);
         lcd.print("R0= ");
         lcd.print(R0);
Serial.print("sensor_voltaj = ");
        Serial.print(sensor_voltaj);
        Serial.println("V");
        Serial.print("R0 = ");
        Serial.println(R0);
        delay(1000);
        }
