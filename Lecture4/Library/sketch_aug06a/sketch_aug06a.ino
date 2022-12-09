#include "DHT.h"
#define DHT11PIN 4

void setup()
{
  Serial.begin(9600);

}
 
void loop()
{
  Serial.println("\n");

  DHT dht4(4, 11,1);
  Serial.print("Read sensor: ");

  
  Serial.print("Humidity (%): ");
  Serial.println((float)dht4.readHumidity(), 4);
 
  Serial.print("Temperature (oC): ");
  Serial.println((float)dht4.readTemperature(), 4);

  delay(2000);
}
