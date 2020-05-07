#include <Servo.h>

Servo myServo;
int angle = 0;
int SW = 11;

int sw_value = 0, sw_value1 = 0;


void setup() {
myServo.attach(10);
myServo.write(0);
pinMode(SW, INPUT);
Serial.begin(9600) ;
}

void loop() {

sw_value = digitalRead(SW);

 if(sw_value1==0 && sw_value==1) { 
                             angle = angle+30;
                             myServo.write(angle);
                             Serial.println(angle);
                             if(angle==180) angle = 0;
  }
   sw_value1 = sw_value ;
   delay(100);
}
