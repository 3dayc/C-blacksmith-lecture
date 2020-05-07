int max_N(int, int, int);
int min_N(int, int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int Mx, Mn;
  int N1, N2, N3;
  String echoStr="";
  
      Serial.println(" Input Three Number(N1,N2, N3) ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
    
      N1 = Serial.parseInt();
      N2 = Serial.parseInt();
      N3 = Serial.parseInt();

      Mx = max_N(N1,N2,N3);
      Mn = min_N(N1,N2,N3);
      echoStr = "Max =  " + String(Mx)+ " Min = " + String(Mn);
      Serial.println(echoStr);
      Serial.println("===================");
  }


int max_N(int x1, int x2, int x3)
 {
  int MAX;

  MAX = x1;
  if(x2 >MAX) MAX = x2;
  if(x3 >MAX) MAX = x3;

  return MAX;
 } 

int min_N(int x1, int x2, int x3)
 {
  int MIN;

  MIN = x1;
  if(x2 <MIN) MIN = x2;
  if(x3 <MIN) MIN = x3;

  return MIN;
 } 
