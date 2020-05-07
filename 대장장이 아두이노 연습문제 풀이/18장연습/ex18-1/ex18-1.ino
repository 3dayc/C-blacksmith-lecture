unsigned long current, before ;

int LED=8;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
int inTime ;
int Sound_val;

 current = millis();
 inTime = current- before;
 if(inTime >=10) {
     before = current ;
     Sound_val= analogRead(A0);
     if(Sound_val >500)  digitalWrite(LED,1);
     else  digitalWrite(LED,0);
     Serial.println(Sound_val);
  }           
 }
