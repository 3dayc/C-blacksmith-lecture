
#include <math.h>
float get_distance(float, float, float, float);

void setup() {
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;
}  


void loop() {
  int x1, y1, x2, y2;
  float dis;
  String echoStr="";
  
      Serial.println(" Input x1,y1,x2,y2 ==>");
      while(1) {
       if(Serial.available() > 0 ) break;
      }
      x1 = Serial.parseInt();
      y1 = Serial.parseInt();
      x2 = Serial.parseInt();
      y2 = Serial.parseInt();
     
      dis = get_distance(x1, y1, x2, y2);
      echoStr = "The distance between Tow Point" + String(dis);
      Serial.println(echoStr);
      Serial.println("===================");
  }

  float get_distance(float x_1,float y_1,float x_2,float y_2)
  {
    float d ;
    d = sqrt((x_1-x_2)*(x_1-x_2) + (y_1-y_2) *(y_1-y_2));
    return d;
  }  


  
