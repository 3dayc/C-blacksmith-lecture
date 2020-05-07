
float make_fabs(float);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     float Fnum ;
     float result ;
         Serial.println("====New Start(make_fabs) =====");
         Serial.println("Enter float Number ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Fnum = Serial.parseFloat(); 
          result = make_fabs(Fnum);

          Serial.print("result = ");
          Serial.println(result);
}

float make_fabs(float x)
{
  if(x <0.0 ) x = x * -1.0 ;     

  return x ;
  
}
