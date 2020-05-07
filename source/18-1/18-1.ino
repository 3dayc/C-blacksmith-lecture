
void setup() {
  Serial.begin(9600);
}

void loop() {
int Sound_val;

 Sound_val= analogRead(A0);
 Serial.println(Sound_val);
 delay(100);
}
