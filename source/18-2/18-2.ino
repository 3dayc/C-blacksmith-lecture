unsigned long current, before ;

void setup() {
  Serial.begin(9600);
  before = millis();
}

void loop() {
int inTime ;
int Sound_val;

 current = millis();
 inTime = current- before;
 
 if(inTime >=10) {
     before = current ;
     Sound_val= analogRead(A0);
     Serial.println(Sound_val);
  }           
 }
