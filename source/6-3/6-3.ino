
int ReadNum(void);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     int Num1=0,i=0 ;
     int sum = 0;
         
      Serial.println("====New Start =====");
      Serial.println("Enter Number ==>");

           // PC에서 데이터가 전송되어 올때까지 기다린다.
          Num1 = ReadNum();

          for( i = 1 ; i <= Num1 ; i ++ ) {
            sum = sum + i;
          }
         Serial.print("sum =  ");
         Serial.println(sum);                    
}

int ReadNum(void)
{
  int n1 ;
    // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
             n1 = Serial.parseInt();
             return n1 ;
} 
