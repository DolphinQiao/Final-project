#include "DHT.h"
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include<Adafruit_GFX.h>
#include <SPI.h>

//屏幕分辨率
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 32 // OLED display height, in pixels
// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define DHT11PIN 4
#define ADDRESS 0x3C
void setup()
{
  Serial.begin(9600);
  Wire.begin();
  display.begin(SSD1306_SWITCHCAPVCC,ADDRESS);
  delay(1000);  
  display.clearDisplay();
  display.display();
}
 
void loop()
{
  Serial.println("\n");
  display.setTextSize(1); //选择字号
  display.setTextColor(WHITE);  //字体颜色

  DHT dht4(4, 11,1);
  
  
  Serial.print("Humidity (%): ");
  Serial.println((float)dht4.readHumidity(), 4);
  display.setCursor(0,0);
  display.print("Humidity (%): ");display.println((float)dht4.readHumidity());
 
  Serial.print("Temperature (oC): ");
  Serial.println((float)dht4.readTemperature(), 4);
  display.setCursor(0,16);
  display.print("Temperature (oC): ");display.println((float)dht4.readTemperature());
  display.display();
  delay(10);
}