
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  

void loop() {
     int a, a1, r;
  
      Serial.println(" Input a ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      a1 = Serial.parseInt();

     a = a1 ; //10
     r= a++; // a값이 r에 들어간 후 a가 1증가 한다 .r=10 
     Serial.print("(a++) : r = "); 
     Serial.println(r); //r = 10

      a = a1 ;
      r= ++a; // a값이1증가한 후  r에 들어간다 .r=11 
     Serial.print("(++a): r = ");
     Serial.println(r); //r= 11

     a = a1 ;
     r= a--; // a값이 k에 들어간 후 a가 1감소 한다 .r=10 
     Serial.print("(a--): r = ");
     Serial.println(r); // r = 10

     a = a1 ;
     r= --a;  // a값이1감소한 후  k에 들어간다 .r=9 
     Serial.print("(--a): r = ");
     Serial.println(r); //r = 9

    Serial.println("===================");
  }
