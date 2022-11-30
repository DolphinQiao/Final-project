int led1=12;
int led2=13;
int switch1=3;
int switch2=2;
bool is_down1=false;
bool is_down2=false;
bool flag_sw1=false,flag_sw2=false;
int flag_RGB=0;
int R=9;
int G=10;
int B=11;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool button1=digitalRead(switch1);
  bool button2=digitalRead(switch2);
  if(!is_down1&&button1==true)
  {
    is_down1=true;
    flag_sw1=!flag_sw1;
    flag_RGB++;
    flag_RGB=(flag_RGB-1)%8+1;
  }
  if(!is_down2&&button2==true)
  {
    is_down2=true;
    flag_sw2=!flag_sw2;
    flag_RGB++;
    flag_RGB=(flag_RGB-1)%8+1;
  }

  if(is_down1&&button1==false)
  {
    is_down1=false;
  }
  if(is_down2&&button2==false)
  {
    is_down2=false;
  }
  if(flag_sw1)digitalWrite(led1,HIGH);
  else digitalWrite(led1,LOW);
  if(flag_sw2)digitalWrite(led2,HIGH);
  else digitalWrite(led2,LOW);
  if(flag_RGB==1)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }else if(flag_RGB==2)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(B,LOW);
  }else if(flag_RGB==3){
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }else if(flag_RGB==4){
    digitalWrite(R,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(B,LOW);
  }else if(flag_RGB==4){
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }else if(flag_RGB==5)
  {
    digitalWrite(R,LOW);
    digitalWrite(G,HIGH);
    digitalWrite(B,HIGH);
  }else if(flag_RGB==6)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,LOW);
    digitalWrite(B,HIGH);
  }else if(flag_RGB==7)
  {
    digitalWrite(R,HIGH);
    digitalWrite(G,HIGH);
    digitalWrite(B,HIGH);
  }else if(flag_RGB==8)//护眼模式
  {
    digitalWrite(R,LOW);
    digitalWrite(G,LOW);
    digitalWrite(B,LOW);
  }
}
