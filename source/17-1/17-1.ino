int LED_W = 8;
int LED_state = 0;
unsigned long current, before ;

void setup() {
  Serial.begin(9600);
  pinMode(LED_W,OUTPUT);
  before = millis();
}

void loop() {
  int inTime ; // interval
 
 current = millis();
 inTime = current- before;
 if(inTime >= 500) {
    before = current ;
    if(LED_state == 0)
               LED_state = 1;
     else 
        LED_state = 0 ;
    
     digitalWrite(LED_W,LED_state);
     Serial.print(" LED = ");
     Serial.println(LED_state);
 }

}
