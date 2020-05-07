int even(int);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
     int x, r; ;
     String echoStr="";
   
      Serial.println("Input Number =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      x = Serial.parseInt();
      r = even(x);

      if(r==1) echoStr = String(x)+ " => Even";
      else    echoStr = String(x)+ " => Odd"; 
      
    Serial.println(echoStr);
    Serial.println("===================");
  }

 int even(int n)
 {
  if(n%2 == 0 ) return 1;
  else return 0 ;
 } 
