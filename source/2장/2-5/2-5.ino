
float y1, y2 ;
void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
 Serial.println("Input y1,y2 (setup) ==>");
 
 while(1) { // PC에서 실수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      y1 = Serial.parseFloat();
      y2 = Serial.parseFloat();
      Serial.print("y1(setup) =  ");
      Serial.print(y1);
      
      Serial.print(",  y2(setup) =  ");
      Serial.println(y2);


}  

void loop() {
     Serial.println("Input y1,y2 (loop) ==>");
 
   
  while(1) { // PC에서 실수 데이터가 전송될때 까지 기다린다.
       if(Serial.available() > 0 ) break;
      }
      y1 = Serial.parseFloat();
      y2 = Serial.parseFloat();
      Serial.print("y1(loop) =  ");
      Serial.print(y1);
      
      Serial.print(",  y2(loop) =  ");
      Serial.println(y2);

      Serial.println("=====================");  
  }
