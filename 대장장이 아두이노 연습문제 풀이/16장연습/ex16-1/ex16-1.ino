#include <Servo.h>

Servo myServo;
float angle = 0.0;

void setup() {
myServo.attach(10);
myServo.write(0);
Serial.begin(9600) ;
}

void loop() {
int IR_val;

 IR_val= analogRead(A1);
 Serial.println(IR_val);

 angle = (float) IR_val;
 angle = angle /1023.;
 angle = angle * 180. ;
 myServo.write(angle);

 Serial.println(angle);
 delay(500);

  
} 
