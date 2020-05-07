
unsigned long current, before ;
int LED_W=8;
int BZ = 9;
void setup() {
  Serial.begin(9600);
  pinMode(LED_W,OUTPUT);
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
     if(water_level >500) {
                    digitalWrite(LED_W,1);
                    digitalWrite(BZ,1);
     }
     else {
                   digitalWrite(LED_W,0);
                   digitalWrite(BZ,0);
     
     }
     Serial.println(water_level);
  }           
 }
