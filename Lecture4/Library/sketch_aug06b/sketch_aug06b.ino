
#include "DHT11.h"


DHT11 dht11;
#define DHT11PIN 4 //pin3
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
      
      dht11.read(DHT11PIN);//温湿度
      float wd = dht11.temperature;
      float sd = dht11.humidity;
  Serial.print("==============");
  Serial.println(wd);
  Serial.println(sd);
  delay(500);
  // put your main code here, to run repeatedly:

}
