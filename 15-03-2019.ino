int waitTimeOn=50;
int waitTimeOff=100;
int blue_pin=9;
int red_pin=8;

void setup() {
  // put your setup code here, to run once:
  pinMode(blue_pin,OUTPUT);
  pinMode(red_pin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

//  digitalWrite(blue_pin,HIGH);
//  delay(300);
//  digitalWrite(red_pin,HIGH);
  
  digitalWrite(blue_pin,LOW);
//  delay(300);
  digitalWrite(red_pin,LOW);
  
}
