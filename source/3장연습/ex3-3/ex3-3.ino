
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  float mile, meter;
 
      Serial.println(" Input mile (float)==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      mile = Serial.parseFloat();

      meter = 1609.0 * mile ;
    
      Serial.print("meter = ");
      Serial.println(meter);
          
      
   Serial.println("===================");
  }
