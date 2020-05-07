 #include <math.h>

 void setup(){
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

     delay(1000);

 }
