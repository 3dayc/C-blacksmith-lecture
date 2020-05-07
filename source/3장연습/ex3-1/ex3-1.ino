
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int w,h, Area,Round;
      Serial.println(" Input w, h ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      w = Serial.parseInt();
      h = Serial.parseInt();
      Area = w*h ;
      Round = 2*w*h;

      Serial.print("Area = ");
      Serial.println(Area);
      Serial.print("Round = ");
      Serial.println(Round);
      
      
   Serial.println("===================");
  }
