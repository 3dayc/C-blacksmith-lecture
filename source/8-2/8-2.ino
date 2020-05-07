
int LED_R = 8 ; 
int Run  ;

void setup() {
 pinMode(LED_R,OUTPUT);
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  

void loop() {
   int i;
   Serial.println("Start ==>");
   Serial.print(" Input Run time ==>");
   while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
  }
  Run = Serial.parseInt();
  Serial.println(Run);
  for( i = 0 ; i < Run ; i ++ ) {
            digitalWrite(LED_R,HIGH);
            Serial.println("LED-ON");
            delay(500);

           digitalWrite(LED_R,LOW);
           Serial.println("LED-OFF");
           delay(500);  
   }
 }
