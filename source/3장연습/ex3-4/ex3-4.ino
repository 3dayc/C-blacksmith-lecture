
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  float height, base, Area;
 
      Serial.println(" Input height, base (float)==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      height = Serial.parseFloat();
      base = Serial.parseFloat();


      Area = 0.5* height * base ;
    
      Serial.print("Area = ");
      Serial.println(Area);
          
      
   Serial.println("===================");
  }
