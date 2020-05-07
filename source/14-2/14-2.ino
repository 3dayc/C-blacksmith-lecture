
int LED = 10;

void setup() {
Serial.begin(9600);
pinMode(LED, OUTPUT);
}

void loop() {
  
int VR;
byte LED_val ; // 0~ 255

VR = analogRead(A0); // 0~ 1023
LED_val = VR/4 ;
analogWrite(LED,LED_val); //0~255
Serial.println(LED_val);

delay(500);
}
