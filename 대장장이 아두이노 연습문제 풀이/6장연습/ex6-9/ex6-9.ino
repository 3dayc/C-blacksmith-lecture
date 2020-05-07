int is_sum(int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int N1, N2, Sum;
  String echoStr="";
  
      Serial.println(" Input Number(N1,N2) ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      N1 = Serial.parseInt();
      N2 = Serial.parseInt();

     Sum = is_sum(N1,N2);
     
      echoStr = "The Sum of between Tow Integer is " + String(Sum);
      Serial.println(echoStr);
      Serial.println("===================");
  }

int is_sum(int x1, int x2)
{
   int i ;
   int s = 0;
   for(i=x1; i<=x2;i++)
       s = s+i ;
   return s;
}      




  
