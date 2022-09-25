#include <SoftwareSerial.h>
#include <Servo.h>

SoftwareSerial BT(0,1); //RX,TX
Servo servo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
if(BT.available()> 0)
{
  int servopos = BT.read();
  Serial.println(servopos);
  servo.write(servopos);
}
}
