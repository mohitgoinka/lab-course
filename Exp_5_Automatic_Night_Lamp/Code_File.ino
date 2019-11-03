int sensorpin=A0;
int ledpin=13;
int sensorvalue=0;
void setup()
{
  Serial.begin(9600);
  pinMode(ledpin,OUTPUT);
}
void loop()
{
  sensorvalue=analogRead(sensorpin);
  Serial.println(sensorvalue);
 delay(100);
  if(sensorvalue>300)
    digitalWrite(ledpin,HIGH);
  else
     digitalWrite(ledpin,LOW);
    
}
