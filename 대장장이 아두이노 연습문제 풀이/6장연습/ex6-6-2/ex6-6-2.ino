int sign(int);

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
      r = sign(x);

      if(r==1)        echoStr = String(x)+ " => is Positive(+) Number";
      else if(r== -1) echoStr = String(x)+ " => is Negative(-) Number";
      else if(r==0)   echoStr = String(x)+ " => is 0 Zero";
      
    Serial.println(echoStr);
    Serial.println("===================");
  }

 int sign(int n)
 {
  if(n>0) return 1;
  else if (n <0 ) return -1;
  else if(n==0) return 0;
 } 
