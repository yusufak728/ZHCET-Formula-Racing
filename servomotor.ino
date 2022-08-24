// C++ code
//
/*
  Sweep

  by BARRAGAN <http://barraganstudio.com>
  This example code is in the public domain.

  modified 8 Nov 2013  by Scott Fitzgerald
  http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

int pos = 0;

Servo servo_9;



void setup()
{
  servo_9.attach(9, 500, 2500);
  Serial.begin(9600);
}

void loop()
{
  
 Serial.println(servo_9.read());
    delay(15); // Wait for 15 millisecond(s)
  
}
