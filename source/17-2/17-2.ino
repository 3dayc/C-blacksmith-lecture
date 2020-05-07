
unsigned long current, before ;

void setup() {
   Serial.begin(9600);
   before = millis(); // 10,0,0
}

void loop() {
  int inTime ;
 
 current = millis(); //10,0,0.001 , 10,0,1.01
 inTime = current- before; // 10,0,1.01 - 10,0,0.001 = 1.01 = 1010

 before = current ; //before = 10,0,0.001
 Serial.println(" Elapsed Time : " +String(inTime)); 
 delay(1000);

 delay(10); // 다른 작업을 하는 시간으로 가정 
}
