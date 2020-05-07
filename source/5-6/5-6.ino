void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int   Sum = 0,Num1 = 0, Num2 = 0;
      int i = 0;
     
      Serial.println("Enter Two Numbers ==>");
     
     // PC에서 데이터가 2개 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() >= 2 ) break;
      }

     Num1 =  Serial.parseInt();  
     Num2 = Serial.parseInt();

     i = Num1 ;
     while( i <= Num2 ) { 
       Sum += i ;    //       Sum = Sum + i ;
       i++;
     } 
     
    Serial.print("The Sum of ");
    Serial.print(Num1);
    Serial.print(" to  ");
    Serial.print(Num2);
     Serial.print(" =  ");
    Serial.println(Sum);
    Serial.println("===================");
  }
