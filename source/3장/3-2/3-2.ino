
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
     int a, b;
     int a1, b1 ;
  
      Serial.println(" Input a, b==>"); // 두 개의 숫자를 입력 받는다
            
      while(1) {  // PC에서 데이터가 들어올 때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      a1 = Serial.parseInt();  // 첫 번째 받는 숫자를 a1 = 4에 저장한다.
      b1 = Serial.parseInt();  // 두 번째 받는 숫자를 b1 = 10에 저장한다.

     a = a1; //a = 4
     b = b1 ; // b = 10

     b= a; // b = 4
     Serial.print("(b = a): b = ");
     Serial.println(b);

     a = a1; //a = 4
     b = b1 ; // b = 10
     b +=a ; // b = b+ a ; b(14) = b(10)+a(4) ; 
     Serial.print("(b += a) : b= ");
     Serial.println(b);

     a = a1; // a= 4
     b = b1 ; //b = 10
     b -= a ; //b = b-a ; (b = 6)
     Serial.print("(b -= a) : b =  ");
     Serial.println(b);
    
     a = a1;
     b = b1 ;
     b *= a; // b = b*a ; (b = 40)
     Serial.print("(b *= a) : b = ");
     Serial.println(b);

     a = a1;
     b = b1 ;
     b /=a; //b = b/a ;  (b = 2)
     Serial.print("(b /= a) : b = ");
     Serial.println(b);

     a = a1; // a = 4
     b = b1 ; // b = 10
     b %=a; //b = b%a (b = 2)
     Serial.print("(b %= a) : b =  ");
     Serial.println(b);
    Serial.println("===================");
  }
