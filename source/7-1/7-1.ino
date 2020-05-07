
void setup() {
  int num[5], i;
  int total=0 ;
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

  num[0] = 10;
  num[1] = 20;
  num[2] = 30;
  num[3] = 40;
  num[4] = 50;

 for ( i = 0 ; i < 5 ; i++ )
    total = total + num[i];
      
Serial.print("total = ");
Serial.println(total);

}  

void loop() { }
 
