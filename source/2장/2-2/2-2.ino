void setup() {

  int x1  = -123;
  float y1 = -234.45;
  
  // 시리얼 통신 속도 설정 : 속도 9600 bps, 8데이터 비트, 패리티 없음, 한 개의 스톱비트
 Serial.begin(9600) ;

 Serial.print("int x1 = ");
 Serial.println(x1);
 
 Serial.print("float y1 = ");
 Serial.println(y1);
}

void loop()
{
}
