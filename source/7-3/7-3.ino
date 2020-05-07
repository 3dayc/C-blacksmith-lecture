
void setup() {
  
 // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;  
}  

void loop() { 
   int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
   int  m ;
   
  Serial.println("Enter Month ==>");
  while(1) {
             if(Serial.available() > 0  ) break;
  }
  m = Serial.parseInt();
  switch(m) {
          case 1 : Serial.print("Jan =");
          break;
          case 2 : Serial.print("Feb =");
          break;
          case 3 : Serial.print("Mar =");
          break;
          case 4 : Serial.print("Apr =");
          break;
          case 5 : Serial.print("May =");
          break;
          case 6 : Serial.print("Jun =");
          break;
          case 7 : Serial.print("Jul =");
          break;
          case 8 : Serial.print("Aug =");
          break;
          case 9 : Serial.print("Sep =");
          break;
          case 10: Serial.print("Oct =");
          break;
          case 11: Serial.print("Nov =");
          break;
          case 12 : Serial.print("Dec =");
          break;

          default: break;
     }
        Serial.println(days[m-1]);

}          
