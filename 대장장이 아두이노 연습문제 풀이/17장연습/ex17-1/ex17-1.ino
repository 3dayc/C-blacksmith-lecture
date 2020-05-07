#include <Servo.h>

Servo myServo;

int angle = 0;
unsigned long current, before ;

void setup() {
myServo.attach(10);
myServo.write(angle);

before = millis(); 
Serial.begin(9600) ;
}

void loop() {
  int inTime ;
 
   current = millis();
   inTime = current- before;

   if(inTime >=1000) {
        before = current ;
        Serial.println(" Elapsed Time : " +String(inTime)); 
         Serial.println(angle); 
        if(angle==0) angle = 180;
        else angle = 0;

        myServo.write(angle);
      
 }
  
} 
