unsigned long current, before ;

void setup() {
  Serial.begin(9600);
  before = millis();
}

void loop() {
int inTime ;
int water_level;

 current = millis();
 inTime = current- before;
 if(inTime >=1000) {
     before = current ;
     water_level= analogRead(A0);
     Serial.println(water_level);
  }           
 }
