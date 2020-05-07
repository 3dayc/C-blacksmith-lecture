#include <Servo.h>

Servo myServo;

void setup() {
myServo.attach(10);
Serial.begin(9600);
}

void loop() {
int VR, angle ;

VR = analogRead(A0);

angle = map(VR, 0, 1023, 0, 180);
myServo.write(angle);
Serial.println(angle);

}
