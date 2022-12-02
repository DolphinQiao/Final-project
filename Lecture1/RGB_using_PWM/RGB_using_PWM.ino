int LED_R=9;
int LED_G=10;
int LED_B=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_R,OUTPUT);
  pinMode(LED_G,OUTPUT);
  pinMode(LED_B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED_R,0);
  analogWrite(LED_G,0);
  analogWrite(LED_B,0);
  for(int i=1;i<=255;++i)
  {
    analogWrite(LED_R,i);
    delay(3);
  }
  analogWrite(LED_R,0);
  for(int i=1;i<=255;++i)
  {
    analogWrite(LED_G,i);
    delay(3);
  }
  analogWrite(LED_G,0);
  for(int i=1;i<=255;++i)
  {
    analogWrite(LED_B,i);
    delay(3);
  }
}
