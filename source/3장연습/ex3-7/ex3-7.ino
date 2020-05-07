
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int x, y, r;
 
      Serial.println(" Input x, y for (x >> y) ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      x = Serial.parseInt();
      y = Serial.parseInt();
       
     r = x >> y;
    
     Serial.print("r = ");
     Serial.println(r,HEX);
          
      
   Serial.println("===================");
  }
