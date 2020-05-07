#define SIZE 5

void setup() {
 // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
  Serial.begin(9600) ;
 
        int num[SIZE]={ 30, 20, 10, 40, 50 } ;
        int i, s ;
       
        Serial.println("====New Start =====");
        Serial.println("Enter Five Numbers ==>");
         
          
          for( i = 0; i <SIZE ; i++ ) {
                 
                 Serial.print("num[");
                 Serial.print(i);
                 Serial.print("] = ");
                 Serial.print(num[i]);
                 Serial.print("  ");

                 for(s= 0 ;s <num[i]; s++ )
                              Serial.print("*");
                 Serial.println(" ");
          }
                
  
}

void loop() {
       

}
