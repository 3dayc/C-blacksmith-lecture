int LED_R = 8 ; 
int time1, time2 ;

void setup() {
 pinMode(LED_R,OUTPUT);  
// 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
 Serial.println("Start ==>");
 Serial.println(" Input delay time1, time2[ms] ==>");
 while(1) { // PC에서 정수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
 }
 time1 = Serial.parseInt();
 time2 = Serial.parseInt();
  Serial.print("time1 = ");
  Serial.println(time1);
  Serial.print(" time2 = ");
  Serial.println(time2);
}  

void loop() {
  
  digitalWrite(LED_R,HIGH);
  Serial.println("LED-ON");
  delay(time1);
  
  digitalWrite(LED_R,LOW);
  Serial.println("LED-OFF");
  delay(time2);  
}
 
