void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int num1, num2;
      int result ;
      
      Serial.println("Enter num1,num2 (num1/num2)  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      num1 = Serial.parseInt();   
      num2 = Serial.parseInt();   

      if(num2==0) {
                 Serial.println("Can not divide by 0");
      }
      else {
         result = num1/num2;
         Serial.print("result = ");
         Serial.println(result);
      } 
    
    Serial.println("===================");
  }
