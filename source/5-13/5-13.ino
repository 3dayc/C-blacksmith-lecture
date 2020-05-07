void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  
void loop() {
      int x = 0, y = 0;
      int row= 0, column = 0;
      
      Serial.println("====New Start =====");
      Serial.println("Enter Two Number ==>");
     
          // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() >= 2 ) break;
          }
          row =  Serial.parseInt();  
          column =  Serial.parseInt(); 
          
         for(y=0 ; y < column ; y++ )
         {
              for(x= 0 ; x <row; x++) {
                      Serial.print("*");
              }               
              Serial.println("");
         }           
}
