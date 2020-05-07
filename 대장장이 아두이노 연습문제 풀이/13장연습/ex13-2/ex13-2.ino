int Reed=11 ;
int LED_W=9;
int LED_R=10; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Reed, INPUT);
pinMode(LED_W, OUTPUT);
pinMode(LED_R, OUTPUT);
}

void loop() {
int Reed_val;

Reed_val=digitalRead(Reed);
if(Reed_val==1){
        digitalWrite(LED_W, 1);
        digitalWrite(LED_R, 0);  
}
else {
        digitalWrite(LED_W, 0);
        digitalWrite(LED_R, 1); 
  
}
Serial.println(Reed_val);
delay(500);
}
