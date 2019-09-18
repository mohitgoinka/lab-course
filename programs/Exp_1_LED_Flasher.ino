void setup() {
  // put your setup code here, to run once:
int i;
pinMode(12,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH);
delay(500);
digitalWrite(12,LOW);
delay(500);
  // the LED will blink for 0.5 second, and stop for 0.5 second
}
