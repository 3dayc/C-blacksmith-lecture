
int x1 ;
float y1 ;

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
      Serial.println(" Input x1, ==>");
      while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      x1 = Serial.parseInt();
      x1 = x1 + 1 ;
      Serial.print("x1 =  ");
      Serial.println(x1);

      Serial.println(" Input y1, ==>");
      while(1) {  // PC에서 실수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      y1 = Serial.parseFloat();

      y1 = y1 + 1.11 ;
      Serial.print("y1 =  ");
      Serial.println(y1);
      Serial.println("=================");
  }
