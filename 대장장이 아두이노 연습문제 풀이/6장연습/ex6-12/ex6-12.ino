char is_alpha(char);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  char ch, trch;
  String echoStr="";
  
      Serial.println(" Input Character ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
    
      ch = Serial.read();
      
      trch = is_alpha(ch);

      echoStr = "result = " + String(trch);
      Serial.println(echoStr);
      Serial.println("===================");
  }

char is_alpha(char c)
{
  char ch1 ;
  
  if(c >= 'a' && c <='z') ch1 = c -32;
  else if( c >= 'A' && c <='Z' ) ch1 = c +32 ;
  else ch1 =c ;

    return ch1;
}
