
void setup() {
  // 시리얼 통신 속도 설정 : 속도 96000 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
      // x1, x2는 지역변수 이므로 loop() 함수 내에서만 사용할 수 있다.
      int x1, x2 ;
      Serial.println("Input x1,x2 ==>");
      while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available()>0  ) break;
      }
      x1 = Serial.parseInt();
      x2 = Serial.parseInt();
      Serial.print("x1 =  ");
      Serial.print(x1);
      
      Serial.print(",  x2 =  ");
      Serial.println(x2);

      Serial.println("=====================");  
  }
