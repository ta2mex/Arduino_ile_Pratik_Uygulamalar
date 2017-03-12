 void setup() {
         Serial.begin(9600);
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
R0=RS_air/28.0; //R0değerinibulmakiçinformülde28.0bölün.(MQ-7)
Serial.print("sensor_voltaj = ");
  Serial.print(sensor_voltaj);
  Serial.println("V");
  Serial.print("R0 = ");
  Serial.println(R0);
  delay(1000);
}
