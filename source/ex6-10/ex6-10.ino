float is_cal(char, float, float);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     float Fnum1, Fnum2 ;
     float result ;
     char oper;
   
         Serial.println("====New Start=====");
         Serial.println("Input Operator(+,-,*,/) ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }

          oper = Serial.read();

          Serial.println("Input Two Float Numbers ==>");
          
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Fnum1 = Serial.parseFloat(); 
          Fnum2 = Serial.parseFloat(); 

          result = is_cal(oper,Fnum1, Fnum2);
          Serial.print("result = ");
          Serial.println(result);

}

float is_cal(char op, float x, float y)
{
  float r ;

  switch(op){
      case '+' : r = x + y ;
      break;

      case '-' : r = x- y ;
      break;

      case '*' : r = x * y;
      break;

      case '/' :r = x/y ;
      break;
  }
  return r ;
}   
