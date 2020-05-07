int Tilt=9 ;
int LED_W=10;
int LED_R=11; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Tilt, INPUT);
pinMode(LED_W, OUTPUT);
pinMode(LED_R, OUTPUT);
}

void loop() {
int Tilt_val;

Tilt_val=digitalRead(Tilt);
if(Tilt_val==1){
        digitalWrite(LED_W, 1);
        digitalWrite(LED_R, 0);  
}
else {
        digitalWrite(LED_W, 0);
        digitalWrite(LED_R, 1); 
  
}
Serial.println(Tilt_val);
delay(500);
}
