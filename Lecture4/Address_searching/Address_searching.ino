#include <Wire.h>
#define ADDRESS 0x3C;
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Serial.println(" I2C Scanner");
}

void loop() {
  // put your main code here, to run repeatedly:
  byte error,address;
  int nDevices;
  Serial.println("Scanning...");
  nDevices=0;
  for(address=1;address<127;++address)
  {
    Wire.beginTransmission(address);
    error=Wire.endTransmission();
    if(error==0)
    {
      Serial.print("I2C device found at address 0x");
      if(address<16)Serial.print("0");
      Serial.print(address,HEX);
      Serial.println(" !");
      nDevices++;
    }else if(error==4)
    {
      Serial.print("Unknow error at address 0x");
      if(address<16)Serial.print("0");
      Serial.println(address,HEX);
    }
  }
  if(nDevices==0)
  {
    Serial.println("No I2C devices found ");
  }else
  {
    Serial.println("done ");
  }
  delay(5000);
}
