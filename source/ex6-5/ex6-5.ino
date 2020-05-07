
float make_pow(int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     int Inum1, Inum2 ;
     float result ;
         Serial.println("====New Start(make_pow) =====");
         Serial.println("Enter Two Numbers(Integer) ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Inum1 = Serial.parseInt(); 
          Inum2 = Serial.parseInt(); 
          result = make_pow(Inum1, Inum2);

          Serial.print("result = ");
          Serial.println(result);
}

float make_pow(int a, int b)
{
  int i ;
  float soo = 1.0;

  if( b> 0 ) {
        for(i = 0; i<b ;i++ )
             soo = soo * a;
  }
  else if( b < 0 ) {
         b = b * -1 ;
         for(i=0; i< b; i++ )
             soo = soo /a ;
  }
  return soo ;
  
}
