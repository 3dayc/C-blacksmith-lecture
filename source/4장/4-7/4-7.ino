void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int num, opt;
      
      Serial.println("Enter an integer from 1 to 5 =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
     num = Serial.parseInt();   

     switch(num)
     {
      case 1 : Serial.println("1 is ONE");
      break;
      case 2 : Serial.println("2 is TWO");
      break;
      case 3 : Serial.println("3 is THREE");
      break;
      case 4 : Serial.println("4 is FOUR");
      break;
      case 5 : Serial.println("5 is FIVE");
      break;
      default : Serial.println("I don't Know!");
      break;
     
     }
  
    Serial.println("===================");
  }
