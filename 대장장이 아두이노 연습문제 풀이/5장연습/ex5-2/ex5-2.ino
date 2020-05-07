void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int N1, N2=0,Sum = 0 ;
      int i = 0;
      Serial.println("Input N1, N2  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      N1 = Serial.parseInt();
      N2 = Serial.parseInt();

     for(i = N1 ; i <=N2 ; i++ )
     {
      if( i%2==0) 
          Sum = Sum + i;
       
     }

      Serial.print("Sum = ");
      Serial.println(Sum);



     
    Serial.println("===================");
  }
