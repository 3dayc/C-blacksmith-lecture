int max3(int, int, int);
int min3(int, int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
      int Mx, Mn ;
      int Inum1, Inum2, Inum3 ;   
         Serial.println("====New Start=====");
         Serial.println("Input Three Integer Numbers ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Inum1 = Serial.parseInt(); 
          Inum2 = Serial.parseInt(); 
          Inum3 = Serial.parseInt(); 

          Mx = max3(Inum1, Inum2, Inum3);
          Mn = min3(Inum1, Inum2, Inum3);

          Serial.print("Max =  ");
          Serial.print(Mx);
          Serial.print(" Min =  ");
          Serial.println(Mn);

}

int max3(int x1, int x2, int x3)
{
  int MAX ;
  
  MAX = x1;
  if(x2 > MAX ) MAX = x2;
  if(x3 > MAX ) MAX = x3 ;
   
     return MAX ;
}
  
int min3(int x1, int x2, int x3)
{
  int MIN ;
  
  MIN = x1;
  if(x2 < MIN ) MIN = x2;
  if(x3 < MIN ) MIN = x3 ;
   
     return MIN ;
} 
  
