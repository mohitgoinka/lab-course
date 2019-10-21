//we place the arduino circuit on the top of the washing machine, such that the ultrasonic sensor's trigger and receiver 
//faces the washing tub of the washing machine. 
int trig=5,echo=6;
void setup() {
  // put your setup code here, to run once:
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
pinMode(12,OUTPUT);//pin 12 is for red LED.
pinMode(13,OUTPUT);//pin 13 is for green LED.
Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
long durat,distance;
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);                                    
delayMicroseconds(10);
digitalWrite(trig,LOW);
durat=pulseIn(echo,HIGH);
//we suppose that the height of the washing machine is 50 cm.
//speed of light in air is approx. 350m/s, and in water is approx. 1500 m/s.
//durat here represents time.
//durat is in micro seconds.
if(durat==1428.57)
digitalWrite(12,HIGH);
else if(durat==333.33){
digitalWrite(13,HIGH);
delay(20);
digitalWrite(13,LOW);
delay(20);
}
}
