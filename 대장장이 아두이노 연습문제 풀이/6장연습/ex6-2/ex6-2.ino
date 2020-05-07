float make_floor(float);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      float Num, a ;
     
      Serial.println("Input float Number  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      Num = Serial.parseFloat();
      a = make_floor(Num);

    Serial.print("Floor Value = ");
    Serial.println(a);     
    Serial.println("===================");
  }

 float make_floor(float x)
 {
   int t ;
   float buff;

   if(x < 0.0 ) x = x-1.0;
   t = x /1.0;

   return (float) t ;
 }  
