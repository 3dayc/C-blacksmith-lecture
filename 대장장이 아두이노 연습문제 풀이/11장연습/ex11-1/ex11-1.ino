#include <math.h>

int Led_R = 8;
int Led_B = 9;

 void setup(){
     pinMode(Led_R, OUTPUT);
     pinMode(Led_B, OUTPUT);
     Serial.begin(9600);
 }

 void loop(){
 double Temp;
 double offset = -12.5;
 int val ;
 String echoStr="";

    val = analogRead(A0);

    Temp = log(((10240000/val) - 10000));
    Temp = 1 / (0.001129148 + (0.000234125 * Temp) 
    + (0.0000000876741*Temp*Temp*Temp));
    Temp = Temp - 273.15;
    Temp = Temp + offset ;

    echoStr = "온도 : "+String(Temp)+ " c";
    Serial.println(echoStr);

     if(Temp > 30.0) {
                  digitalWrite(Led_R, 1);
                  digitalWrite(Led_B, 0);
     }
     else  {
                  digitalWrite(Led_R,0);
                  digitalWrite(Led_B, 1);
     }
     delay(1000);

 }
