
float get_distance(float, float, float, float);


void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

}  

void loop() {
     float x1, y1, x2, y2 ;
     float dist;
         Serial.println("====New Start=====");
         Serial.println("Input First Coordinate(x1, y1) ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          x1 = Serial.parseFloat(); 
          y1 = Serial.parseFloat(); 

          Serial.println("Input Second Coordinate(x2, y2) ==>");
         
           // PC에서 데이터가 전송되어 올때까지 기다린다.
          while(1) {
             if(Serial.available() > 0  ) break;
          }
          x2 = Serial.parseFloat(); 
          y2 = Serial.parseFloat();

          dist = get_distance(x1,y1,x2,y2);
          Serial.print("The distance between two points is :");
          Serial.println(dist);
                 
}

float get_distance(float x_1, float y_1, float x_2, float y_2)
{
  float d ;

   d = sqrt((x_1- x_2) *(x_1-x_2) + (y_1 - y_2) * (y_1 - y_2 ) );

   return d ;
}  
  
