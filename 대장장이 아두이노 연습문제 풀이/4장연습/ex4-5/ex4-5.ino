void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      char ch;
      
      Serial.println("Input character  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      ch = Serial.read();   
      if(ch >='A' && ch <='Z') Serial.println("Capital letter");
      else if (ch>='a' && ch <='z') Serial.println("small letter");
      else if (ch>='0' && ch<='9') Serial.println("Number");
      
      
    Serial.println("===================");
  }
