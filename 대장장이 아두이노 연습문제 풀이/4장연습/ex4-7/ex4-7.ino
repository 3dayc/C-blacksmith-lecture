void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int Height, Age ;
      
      Serial.println("Input Height, Age  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      Height = Serial.parseInt();
      Age = Serial.parseInt();
        
         
     if(Height >=150){
          if(Age >=12 ) Serial.println("OK");
          else Serial.println("Not OK");
     }
    else Serial.println("Not OK");
    Serial.println("===================");
  }
