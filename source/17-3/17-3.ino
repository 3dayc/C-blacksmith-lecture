
unsigned long current, before ;

void setup() {
    Serial.begin(9600);
    before = millis(); 
}

void loop() {
  int inTime ;
 
 current = millis();
 inTime = current- before;

 if(inTime >=1000) {
     before = current ;
     Serial.println(" Elapsed Time : " +String(inTime)); 
     delay(250);
     Serial.println("Time delay by other work"); //다른작업에 의해 지연되는 시간
 }
}
 
