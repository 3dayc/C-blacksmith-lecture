#include <math.h>

int Led_R = 8;

 void setup(){
     pinMode(Led_R, OUTPUT);
     Serial.begin(9600);
 }

 void loop(){
 double Temp;
 double offset = -12.5;
 int val ;
 

    val = analogRead(A0);

    Temp = log(((10240000/val) - 10000));
    Temp = 1 / (0.001129148 + (0.000234125 * Temp) 
    + (0.0000000876741*Temp*Temp*Temp));
    Temp = Temp - 273.15;
    Temp = Temp + offset ;

 
     Serial.print("온도 : ");
     Serial.print(Temp);
     Serial.println(" C  ");

     if(Temp > 30.0) digitalWrite(Led_R, 1);
     else digitalWrite(Led_R,0);
     delay(1000);

 }
