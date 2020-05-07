
#define SIZE 5

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int num[5];
  String echoStr="";
  
      Serial.println(" Input 5 Numbers ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }

      for(int i = 0 ; i< 5; i++ )
           num[i] = Serial.parseInt();

      for(int i = 0; i< 5; i++ ) {
            for(int j = 0 ; j < num[i]; j++ ) 
                             Serial.print(" * ");
            Serial.println();
                               
      }
                   
      Serial.println("===================");
  }
