void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int opt;
      float  num1, num2,result ;
      Serial.println("1.(+), 2.(-), 3.(x), 4.(/)");
      Serial.println("Select opt Number =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      
      opt = Serial.parseInt();   

      Serial.println("Inupt float Number 1, 2 =>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      num1 = Serial.parseFloat();
      num2 = Serial.parseFloat();

     if(opt==1) result = num1 + num2 ;
     else if(opt==2) result = num1 - num2 ;
     else if(opt==3) result = num1 * num2 ;
     else  result = num1 /num2 ;

     Serial.print("result = ");
     Serial.println(result);
    
    Serial.println("===================");
  }
