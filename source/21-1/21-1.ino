
// 대장장이 보드의 2번핀과 3번핀을 블루투스와 시리얼로 데이터를 주고받기위한 용도로 사용하기
// 위하여 핀(포트)의 기능을 변경하는 라이브러리이다. 
#include <SoftwareSerial.h>  

SoftwareSerial BT(2,3) ; // 2번 핀을 RXD(블루투스 TXD에 연결)
                        // 3번핀을 TXD(블루투스 RXD에 연결) 시리얼 포트로 설정하고 
                         //BT라는 이름으로 사용함

void setup() {
 Serial.begin(9600); //PC와 9600 bps 속도로 통신 시작
 BT.begin(9600); // 블루투스와 9600 bps 속도로 통신시작
}

void loop() {
   char b, c ;
  
  if(Serial.available()) { // PC의 시리얼 모니터에서 입력한 데이터가 있다면
    c = Serial.read();   // 입력된 문자를 변수 C에 넣음
    BT.write(c);        // 블루투스 문자를 보냄
  }

 if(BT.available()){     // 블루투스에서 보내오는 데이터가 있다면
    b = BT.read();     //블루투스에서 보내오는 문자를 변수 b에 넣음
    Serial.write(b);    // 변수 b에 담긴 문자를 PC의 시리얼 모니터로 보냄
 }
}
