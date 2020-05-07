
int Add(int, int); // 사용하고자 하는 함수를 맨위에 선언해 준다 

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  

void loop() {
     int n1, n2 ;
     int result;
         
      Serial.println("====New Start =====");
      Serial.println("Enter  Two Number ==>");

           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() >0  ) break;
          }
          n1 = Serial.parseInt();
          n2 = Serial.parseInt();

        result = Add(n1, n2);

         Serial.print(n1);
         Serial.print(" + ");
         Serial.print(n2);
         Serial.print(" = ");            
         Serial.println(result);
                      
}


// 전달인자 입력과 출력이 모두 있는 함수이다.
int Add(int Num1,int Num2)
{
   return Num1+Num2 ;
} 
