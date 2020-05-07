int LED_W = 9 ;

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
 pinMode(LED_W,OUTPUT);
}  


void loop() {
     int on, off, times ;
  
     Serial.println(" Input 3 Numbers ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      on = Serial.parseInt();
      off = Serial.parseInt();
      times = Serial.parseInt();
      for(int i = 0 ; i <times ; i++ ) {
                      digitalWrite(LED_W,1);
                      delay(on);
                      digitalWrite(LED_W,0);
                      delay(off);
      } 
      Serial.println("=====================");
  }
