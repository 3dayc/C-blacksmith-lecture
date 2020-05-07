#include <SoftwareSerial.h>

SoftwareSerial BT(2,3) ;/// 2번 핀을 RX(블루투스 TXD에 연결)
                        // 3번핀을 TX(블루투스 RXD에 연결) 시리얼 포트로 설정하고 
                         //BT라는 이름으로 사용함
int LED_W = 8 ;

void setup() {
  
 Serial.begin(9600); //PC와 9600 bps 속도로 통신 시작
 BT.begin(9600); // 블루투스와 9600 bps 속도로 통신시작
 
 pinMode(LED_W,OUTPUT);
}

void loop() {
   char b ;
  
 while(1) {
   if(BT.available()>0)  break;
 }
 b = BT.read();
 if(b=='0') digitalWrite(LED_W,0);
 else if(b=='1') digitalWrite(LED_W,1);
 
 Serial.write(b);
}
