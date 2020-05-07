
float y1 = 12, y2= 13 ; //전역변수 
void setup() {
  float y1=-45, y2=-67 ; //지역변수 
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
 Serial.print("y1(setup) =  ");
 Serial.print(y1);
      
 Serial.print(",  y2(setup) =  ");
 Serial.println(y2);
}  
void loop() {
      Serial.print("y1(loop) =  ");
      Serial.print(y1); 
      Serial.print(",  y2(loop) =  ");
      Serial.println(y2);

      while(1); 
  }
