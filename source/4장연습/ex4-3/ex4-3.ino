void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int Height, Weight;
      float St_Weight;
      
      Serial.println("Enter Height, Weight  =>");
     
     // PC에서 데이터가 전송되어 올때까지 기다린다.
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      Height = Serial.parseInt();   
      Weight = Serial.parseInt(); 

      St_Weight = (Height-100) * 0.9;

      if(Weight > St_Weight)
         Serial.println("Over weight");
      else if( Weight < St_Weight)
           Serial.println("Low weight");
      else 
           Serial.println("Standard weight");
     
    Serial.println("===================");
  }
