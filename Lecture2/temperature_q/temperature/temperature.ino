int val=0;
int LM=2;
int LED1=13;
int LED2=12;
int Buzzer=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(LM,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(LM);
  val=(125*val)>>8;
  Serial.print(val);
  if(val<26)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    analogWrite(Buzzer,0);
  }else
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    analogWrite(Buzzer,500);
  }
  delay(500);
}
