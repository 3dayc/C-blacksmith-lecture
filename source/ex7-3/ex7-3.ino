
void setup() {
 // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
  Serial.begin(9600) ;
}

void loop() {
       
 int  month ;
        int days[] = {31, 28, 31,30, 31, 30, 31, 31, 30, 31, 30, 31 };
       
        Serial.println("====New Start =====");
        Serial.println("Enter  Month  ==>");
        while(1) {
             if(Serial.available() > 0  ) break;
         } 

         month = Serial.parseInt() ;
         Serial.print(month);
         Serial.print(" Month = ");
         Serial.print(days[month-1]);
         Serial.println(" days");       
}
