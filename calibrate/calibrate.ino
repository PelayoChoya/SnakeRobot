#include <Servo.h> 
#include "skymega.h"


//-- Array for accesing the 4 servos
Servo myservo[2];  
 
void setup() 
{
  //-- Attaching the 4 servos
  myservo[0].attach(SERVO2);
  myservo[1].attach(SERVO4);
}  
 
void loop() 
{ 
  myservo[0].write(90);
  myservo[1].write(90);
} 
