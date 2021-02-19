// declaration of input pins
  const int red_pin=12;
  const int yellow_pin=11;
  const int green_pin=10;
  int delayP=50;

  //declaration of the pinMode(input or output)
void setup() {
pinMode(red_pin,OUTPUT);
pinMode(yellow_pin,OUTPUT);
pinMode(green_pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //light the red led for 3 secs
  digitalWrite(green_pin,HIGH);
  delay(delayP);
  digitalWrite(red_pin,HIGH);
  delay(delayP);

  //light the yellow led for 2 secs
  digitalWrite(yellow_pin,HIGH);
  delay(200);
  

  //turn off red and yellow and turn on green for 5 secs
  digitalWrite(red_pin, LOW);
  digitalWrite(yellow_pin,HIGH);
  digitalWrite(green_pin,HIGH);
  delay(200);

  //turn green off and light yellow for 1 sec
  digitalWrite(green_pin,LOW);
  digitalWrite(yellow_pin,HIGH);
  delay(200);

  //finally turn off the yellow led
  digitalWrite(yellow_pin,HIGH);
}
