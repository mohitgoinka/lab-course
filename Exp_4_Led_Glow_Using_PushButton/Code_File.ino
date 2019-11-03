int led=13;
int sp=12;
  void setup()
{
  pinMode(led,OUTPUT);
  pinMode(sp,INPUT);
  }
  void loop()
  {
    boolean a=digitalRead(sp);
    if(a==1)
      digitalWrite(led,HIGH);
    else
      digitalWrite(led,LOW);
  }
