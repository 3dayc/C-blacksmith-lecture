
void setup() {
Serial.begin(9600);
}

void loop() {
byte VR; // 0~255

VR=analogRead(A0); //0~ 1023
Serial.println(VR);

delay(500);
}
