void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int   i=1, dan=0;
     
      Serial.println("Enter Number ==>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }

     dan =  Serial.parseInt();  

     while( i <= 9 ) { 
        Serial.print(dan);
        Serial.print(" X ");
        Serial.print(i);
        Serial.print(" = ");
        Serial.println(dan*i);
        i++;
     } 
    Serial.println("===================");
  }
