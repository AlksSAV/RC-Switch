// Copyright © 2020 McKey All right reserved 
// https://youtu.be/ay8xG-RWj8s https://youtu.be/CZe1E0ldRTg
// RC switch v1.2.1
// SW1 - two-position switch
// SW2 - three-position switch
int RX1; 
int RX2;

void setup()
{
 pinMode(2, INPUT);
 pinMode(3, INPUT);
 pinMode(0, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(4, OUTPUT);
}
void loop()
{
 RX1=pulseIn(2,HIGH);
 RX2=pulseIn(3,HIGH);
 
   //if (RX1>1500) {digitalWrite(0, HIGH);} else {digitalWrite(0, LOW);} // SW1 ON or OFF
   //if (RX2>1500 && RX2 < 1950) {digitalWrite(1, HIGH);} else {digitalWrite(1, LOW);} // SW2 The switch turns on the first device
   //if (RX2>1951) {digitalWrite(4, HIGH);} else {digitalWrite(4, LOW);} // The switch turns on the second device but turns off the first one.

  if (RX1>1500) {digitalWrite(0, HIGH);} else {digitalWrite(0, LOW);} // SW1 ON or OFF
  if (RX2>1500) {digitalWrite(1, HIGH);} else {digitalWrite(1, LOW);} // SW2 The switch turns on the first device
  if (RX2>1951) {digitalWrite(4, HIGH);} else {digitalWrite(4, LOW);} // SW2 The switch turns on the second device and the first device continues to work.

delay(10);
}