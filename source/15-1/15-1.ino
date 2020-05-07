#include <Servo.h>

Servo myServo;
int angle = 0;

void setup() {
myServo.attach(10);
}

void loop() {
if(angle==0 ) 
         angle = 180;
else 
          angle = 0; 
    
myServo.write(angle);

delay(500);
}
