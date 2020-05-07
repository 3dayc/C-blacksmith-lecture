int is_sum(int, int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     int Inum1, Inum2 ;
     int sum ;
   
         Serial.println("====New Start=====");
         Serial.println("Input Two Integer Numbers ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          Inum1 = Serial.parseFloat(); 
          Inum2 = Serial.parseFloat(); 

          sum = is_sum(Inum1, Inum2);

          
          Serial.print("The sum between two integers = ");
          Serial.println(sum);
                 
}

int is_sum(int n1, int n2)
{
  int i ;
  int s = 0;

  for(i = n1; i<=n2 ;i++)
    s = s+ i;

  return s ;
}   
