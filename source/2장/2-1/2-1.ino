 
// D8번 핀을 LED 이라고 이름을 준다.
int LED = 8;

int d1, d2 ; 

void setup() {
  
// 8번핀(LED)을 출력 핀으로 설정한다.
  pinMode(LED, OUTPUT);
  d1 = 1000;
  d2 = 100;
}

void loop() {
 
  digitalWrite(LED, 1); 
  delay(d1); // LED가 ON되는 시간은 1000 [ms]로 설정한다  
  
  digitalWrite(LED, 0); 
  delay(d2); // LED가 OFF 되는 시간을 100 [ms]로 설정한다.
}
