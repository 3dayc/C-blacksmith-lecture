
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  float C, F;
 
      Serial.println(" Input Temp F==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      F = Serial.parseFloat();
     
      C = 5.0/9.0 *(F-32.0) ;
    
      Serial.print("C = ");
      Serial.println(C);
          
      
   Serial.println("===================");
  }
