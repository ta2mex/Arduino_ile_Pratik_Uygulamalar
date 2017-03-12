#include<Wire.h>
#include <Servo.h>
const int MPU=0x68;
const int servox = 13; 
const int servoy = 10; 
int16_t AcX,AcY;
int servoDegerx;
int servoDegery;
Servo servomotorx;
Servo servomotory;
void setup(){
  Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);
  Wire.write(0); 
  Wire.endTransmission(true);
  Serial.begin(115200);
  servomotorx.attach(servox);
  servomotory.attach(servoy);
}
void verileriOku(){
  Wire.beginTransmission(MPU);
  Wire.write(0x3B); 
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true); 
  AcX=Wire.read()<<8|Wire.read();   
  AcY=Wire.read()<<8|Wire.read();  
}

void loop(){
  verileriOku();
  Serial.print("ivmeX = "); Serial.print(AcX);
  Serial.print(" | ivmeY = "); Serial.print(AcY);
  AcX = map(AcX, -10000, 10000, 0, 180); 
  servomotorx.write(AcX);
  AcY = map(AcY, -10000, 10000, 0, 180); 
  servomotory.write(AcY);
}

  
