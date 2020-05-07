
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int a,b, r;
      Serial.println(" Input a, b ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      a = Serial.parseInt();
      b = Serial.parseInt();

     r = a & b ;
     Serial.print("bit AND = ");
     Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.
     
     r = a | b;
     Serial.print("bit OR  = ");
     Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.

     r = a ^ b ;
    Serial.print("bit XOR = ");
    Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.

    r = a << 2 ;
    Serial.print("bit shift << =  ");
    Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.

     r = b >> 1 ;
    Serial.print("bit shift >>=  ");
    Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.

   r = ~a;
   Serial.print("bit NOT = ");
   Serial.println(r, HEX); // 16진법으로 PC 시리얼모니터 창에 출력한다.
    
   Serial.println("===================");
  }
