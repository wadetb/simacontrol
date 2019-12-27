// https://playground.arduino.cc/ComponentLib/Servo/
#include <SoftwareServo.h>

SoftwareServo servo1;
SoftwareServo servo2;

void setup()
{
  servo1.attach(0);
  servo2.attach(1);
}

void loop()
{
  int wiper1 = analogRead(A0);
  int wiper2 = analogRead(A1);
  int rate1 = map(wiper1, 0, 1023, 0, 179);
  int rate2 = map(wiper2, 0, 1023, 0, 179);
  servo1.write(rate1);
  servo2.write(rate2);
  SoftwareServo::refresh();
}
