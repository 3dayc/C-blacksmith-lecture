void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      char sel; // 1 byte
      
      Serial.println("Enter Character ( M(m), A(a),E(e) ==>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }

      // 문자를 시리얼 통신으로 받을때는 Serial.read()를 사용한다
     sel = Serial.read();   

     switch(sel) {
      case 'M' :
      case 'm': Serial.println("Morning!");
      break;

      case 'A':
      case 'a': Serial.println("Afternoon!");
      break;

      case 'E':
      case 'e': Serial.println("Evening!");
      break;
     }
       
    Serial.println("===================");
  }
