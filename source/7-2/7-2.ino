#define STUDENT 5

void setup() {
  int num[STUDENT], i;
  int total=0, ave = 0 ;
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

 Serial.println("Enter 5 Numbers ==>");
  while(1) {
             if(Serial.available() > 0  ) break;
  }
  
  for(i = 0; i < STUDENT ; i++ )   num[i] = Serial.parseInt();
 
  for( i = 0 ; i < STUDENT ; i++ )  total = total + num[i];

   ave = total/STUDENT ;   
   Serial.print("total = ");
   Serial.println(total);

   Serial.print("ave = ");
   Serial.println(ave);
}  

void loop() { }
 
