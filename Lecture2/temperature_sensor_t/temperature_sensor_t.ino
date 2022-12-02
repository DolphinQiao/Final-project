int led1=12;
int led2=13;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int val;
int dat;
val=analogRead(2);
dat=(125*val)>>8;
Serial.print("Temp:");
Serial.print(dat);
Serial.print("C");
if(dat>22)
{
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
}
else
{
  digitalWrite(led2,HIGH);
  digitalWrite(led1,LOW);
}
delay(500);
}