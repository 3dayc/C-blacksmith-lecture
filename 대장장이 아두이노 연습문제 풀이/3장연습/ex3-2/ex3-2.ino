
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  float f1,f2,f3;
  float sum, ave ;
      Serial.println(" Input f1, f2, f3 (float)==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      f1 = Serial.parseFloat();
      f2 = Serial.parseFloat();
      f3 = Serial.parseFloat();
    
      sum = f1 + f2 + f3 ;
      ave = sum /3.0;
 
      Serial.print("sum = ");
      Serial.println(sum);
      Serial.print("ave = ");
      Serial.println(ave);
      
      
   Serial.println("===================");
  }
