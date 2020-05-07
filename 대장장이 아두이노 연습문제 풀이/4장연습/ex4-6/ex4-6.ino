void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int N1, N2, N3 ;
      
      Serial.println("Input Num1, Num2, Num3  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      N1 = Serial.parseInt();
      N2 = Serial.parseInt();
      N3 = Serial.parseInt();   
     //3 2 4
     Serial.print("Big Number= ");
     if(N1 > N2 ) {
               if(N1 > N3) Serial.println(N1);
     }
    if(N2 > N3 ) {
              if(N2 > N1 )  Serial.println(N2); 
     }
     if(N3 > N1 ) {
              if(N3 > N2 )  Serial.println(N3); 
     }
     
    Serial.println("===================");
  }
