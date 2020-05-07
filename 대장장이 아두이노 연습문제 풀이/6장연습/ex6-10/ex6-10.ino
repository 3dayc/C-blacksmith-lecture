float is_cal(char, float, float);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  char oper;
  float f1, f2, result ;
  String echoStr="";
  
      Serial.println(" Input Number(N1,N2) ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      oper = Serial.read();
      f1 = Serial.parseFloat();
      f2 = Serial.parseFloat();

      result = is_cal(oper,f1,f2);
     
      echoStr = "Result =  " + String(result);
      Serial.println(echoStr);
      Serial.println("===================");
  }

float is_cal(char op, float x, float y)
{
 float r;
 switch(op) {
   case'+' : r = x+y;
   break;

   case'-' : r = x-y;
   break;

   case'*' : r = x*y;
   break;

   case'/' : r = x/y;
   break;

   default: break;
 }

 return r;
}      




  
