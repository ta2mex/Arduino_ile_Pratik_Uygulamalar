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
//R0 = RS_air/10.0; //R0 değerini bulmak için formülde 10.0 bölünecek.(MQ2)
//R0 = RS_air/70.0; //R0 değerini bulmak için formülde 70.0 bölünecek.(MQ3)
//R0 = RS_air/3.0;  //R0 değerini bulmak için formülde 3.0 bölünecek. (MQ4)
//R0 = RS_air/6.5;  //R0değerini bulmak için formülde 6.5 bölünecek. (MQ5)
//R0 = RS_air/10.0; //R0 değerini bulmak için formülde 10.0 bölünecek.(MQ6)
//R0 = RS_air/28.0; //R0 değerini bulmak için formülde 28.0 bölünecek.(MQ7)
//R0 = RS_air/50.0; //R0 değerini bulmak için formülde 50.0 bölünecek.(MQ8)
//R0 = RS_air/20.0; //R0 değerini bulmak için formülde 20.0 bölünecek.(MQ9)
//R0 = RS_air/5.0;  //R0 değerini bulmak için formülde 5.0 bölünecek.(MQ135)
Serial.print("sensor_voltaj = ");
  Serial.print(sensor_voltaj);
  Serial.println("V");
  Serial.print("R0 = ");
  Serial.println(R0);
  delay(1000);
}
