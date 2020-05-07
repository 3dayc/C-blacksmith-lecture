void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int num;
      
      Serial.println("Enter an integer  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      num = Serial.parseInt();   

      if(num %2 ==0 ) Serial.println("Even Number");
      else            Serial.println("Odd Number");
     
    Serial.println("===================");
  }
