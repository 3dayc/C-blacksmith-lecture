
float f_to_c(float);


void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     float Fnum ;
     float result;
         Serial.println("====New Start=====");
         Serial.println("Enter F Temp ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Fnum = Serial.parseFloat(); 
          result = f_to_c(Fnum);
        
          Serial.print("Temp[C] = ");
          Serial.println(result);

          
}

float f_to_c(float f)
{
 float c;

 c = (5.0/9.0) * (f-32.0) ;
 return c ; 
}

int sign(int x )
{
  int s ;
  if(x > 0 ) s = 1 ;
  else if( x < 0 ) s = -1;
  else s = 0 ; 

  return s ;
}
