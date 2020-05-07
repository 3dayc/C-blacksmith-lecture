


void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     int x1;
     float x2, sum = 0;      
      Serial.println(" Input (int)x1,(float)x2 ==>");
      while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      x1 = Serial.parseInt();
      x2 = Serial.parseFloat();

      sum = x1+x2 ;
         
      Serial.print("sum =  ");
      Serial.println(sum);

      Serial.println("=================");
  }
