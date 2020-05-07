float make_pow(int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
     int N1, N2; ;
     float a ;
     String echoStr="";
      Serial.println("Input Number(N1,N2)  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      N1 = Serial.parseInt();
      N2 = Serial.parseInt();
      
      a = make_pow(N1, N2);
      echoStr = String(N1)+" ** "+String(N2)+" = "+String(a);

    Serial.println(echoStr);
    Serial.println("===================");
  }

float make_pow(int a, int b)
 {
    int i ;
    float soo=1.0 ;
  
   if( b > 0 ) {
       for(i = 0; i< b ; i ++ )
               soo =soo * a ;
    }
  else if(b< 0 ) {
         b = b * -1 ;
         for(i = 0; i < b;i++) 
          soo = soo /a;
    }
     return soo ;
 }  
