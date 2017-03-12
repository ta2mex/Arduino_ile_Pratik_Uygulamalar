#include<Wire.h>
const int MPU=0x68;
int16_t AcX,AcY,AcZ,Tmp,GyX,GyY,GyZ;
void setup(){
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
  Serial.begin(115200);
}
void loop(){
  verileriOku();
  Serial.print("ivmeX = "); Serial.print(AcX);
  Serial.print(" | ivmeY = "); Serial.print(AcY);
  Serial.print(" | ivmeZ = "); Serial.print(AcZ);
  Serial.print(" | Sicaklik = "); Serial.print(Tmp/340.00+36.53);
  Serial.print(" | GyroX = "); Serial.print(GyX);
  Serial.print(" | GyroY = "); Serial.print(GyY);
  Serial.print(" | GyroZ = "); Serial.println(GyZ);
  delay(500);
}
void verileriOku(){
  Wire.beginTransmission(MPU);
  Wire.write(0x3B);
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true);
  AcX=Wire.read()<<8|Wire.read();
  AcY=Wire.read()<<8|Wire.read();
  AcZ=Wire.read()<<8|Wire.read();
  Tmp=Wire.read()<<8|Wire.read();
  GyX=Wire.read()<<8|Wire.read();
  GyY=Wire.read()<<8|Wire.read();
  GyZ=Wire.read()<<8|Wire.read();}

