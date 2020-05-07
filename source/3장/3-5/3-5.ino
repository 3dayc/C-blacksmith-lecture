
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  

void loop() {
  int a, b, r;
  
      Serial.println(" Input a, b ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      a = Serial.parseInt();
      b = Serial.parseInt();
      // a = 12, b = 10
        
     r = (a==12 && b==10);
     Serial.print("(a ==12 && b==10) =>  ");
     Serial.println(r);

     r = (a <12 || b> 9);
     Serial.print("(a <12 || b > 9)  =>  ");
     Serial.println(r);

     r = (!a );
     Serial.print("!a                 => ");
     Serial.println(r);

     Serial.println("===================");
  }
