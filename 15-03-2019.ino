int waitTimeOn=50;
int waitTimeOff=100;
int blue_pin=9;
int red_pin=8;

void setup() {
  pinMode(blue_pin,OUTPUT);
  pinMode(red_pin,OUTPUT);

}

void loop() {

  digitalWrite(blue_pin,HIGH);
  delay(300);
  digitalWrite(red_pin,HIGH);
  
  digitalWrite(blue_pin,LOW);
  delay(300);
  digitalWrite(red_pin,LOW);
  
}
