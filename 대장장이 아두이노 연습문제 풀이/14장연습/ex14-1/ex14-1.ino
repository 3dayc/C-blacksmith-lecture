int LED_W=10;
int LED_R=11;

void setup() {
Serial.begin(9600);
pinMode(LED_W, OUTPUT);
pinMode(LED_R, OUTPUT);
}

void loop() {
int VR;
unsigned char LED_val,Re_LED ;

VR=analogRead(A0);
LED_val = VR/4 ;
Re_LED = 255-LED_val;

analogWrite(LED_W,LED_val);
analogWrite(LED_R,Re_LED);

Serial.println(LED_val);

delay(500);
}
