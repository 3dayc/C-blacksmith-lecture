#define SIZE 5

void setup() {
 // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
  Serial.begin(9600) ;
}

void loop() {
        int num[5], i ;
         Serial.println("====New Start =====");
         Serial.println("Enter Five Numbers ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          
          for( i = 0; i <SIZE ; i++ )
                 num[i] = Serial.parseInt();

          for( i = SIZE-1 ; i >=0 ; i -- ){
                 Serial.print("num[");
                 Serial.print(i);
                 Serial.print("] = ");
                 Serial.println(num[i]);
          }
                

}
