void setup() {
  Serial.begin(9600);
}
void loop() {
float sensor_volt;
float RS_gas;
float oran;
  int sensorValue = analogRead(A0);

   sensor_volt=( float)sensorValue/1024*5.0;
  RS_gas = (5.0-sensor_volt)/sensor_volt;
oran = RS_gas/0,32; // Benim ölçümümde R0 değeri 0,32 çıktı
  Serial.println(sensor_volt);
  Serial.print("RS_oran = ");
  Serial.println(RS_gas);
  Serial.print("Rs/R0 = ");
  Serial.println(oran);
  Serial.print("\n\n");
  delay(1000);
}
