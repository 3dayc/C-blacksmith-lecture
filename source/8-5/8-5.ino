int LED_W = 9 ; 
int brightness ;


void setup() {
 pinMode(LED_W,OUTPUT);
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  

void loop() {
   Serial.println("Start ==>");
   Serial.print(" Input brightness ==>");
   while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
   }
   brightness = Serial.parseInt();
   Serial.println(brightness);
   analogWrite(LED_W,brightness);           
 }
