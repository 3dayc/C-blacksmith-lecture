
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
      int num ;
      Serial.println("Input num ==>");
    
     while(1) {
       if(Serial.available() > 0 ) break;
      }
      num = Serial.parseInt();
      
      if(num==0)   
             Serial.println("num = 0");
      if(num > 0)   
             Serial.println("num > 0");
       if(num < 0)   
             Serial.println("num < 0");
        
    Serial.println("===================");
  }
