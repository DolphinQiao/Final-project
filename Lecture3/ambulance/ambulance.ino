int Light = 1;
int Tem=2;
int R=9;
int G=10;
int B=11;
int Buzzer=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(Light,INPUT);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(Buzzer,OUTPUT);
  pinMode(Tem,INPUT);
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  float L=analogRead(Light);
  if(L<=250)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }else if(L<=500)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }else if(L<700)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(B,LOW);
  }else
  {
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }
  Serial.print(L);
  Serial.println();
  delay(10);
}
