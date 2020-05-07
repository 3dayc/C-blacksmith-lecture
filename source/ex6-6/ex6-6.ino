
int even(int);
int sign(int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     int Inum ;
     int even_result, sign_result ;
         Serial.println("====New Start=====");
         Serial.println("Enter Integer Number ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Inum = Serial.parseInt(); 
          even_result = even(Inum);
          sign_result = sign(Inum);

          Serial.print("even result = ");
          Serial.println(even_result);

          Serial.print("sign result = ");
          Serial.println(sign_result);
}

int even(int x)
{
  if( x%2 == 0) return 1;
  else return 0; 
  
}

int sign(int x )
{
  int s ;
  if(x > 0 ) s = 1 ;
  else if( x < 0 ) s = -1;
  else s = 0 ; 

  return s ;
}
