
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int Month;
  String echoStr="";
  
      Serial.println(" Input Month ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }

       Month = Serial.parseInt();
       echoStr = String(Month)+" Month = "+String(day[Month-1])+"days";
       Serial.println(echoStr);        
     
      Serial.println("===================");
  }
