
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
    int a, b, r;
  
      Serial.println(" Input a, b==>"); // a, b 두 개의 숫자를 입력한다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      a = Serial.parseInt();
      b = Serial.parseInt();

     r= a+b;
     Serial.print(" a+b = ");
     Serial.println(r);

      r= a-b;
     Serial.print(" a-b = ");
     Serial.println(r);

      r= a*b;
     Serial.print(" a*b = ");
     Serial.println(r);

      r= a/b;
     Serial.print(" a/b = ");
     Serial.println(r);

      r= a%b;
     Serial.print(" a%b = ");
     Serial.println(r);

  }
