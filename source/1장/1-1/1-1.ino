void setup() {
  pinMode(8,OUTPUT);
}

void loop() {
  digitalWrite(8,1);
  delay(500); //500ms, 0.5초

  digitalWrite(8,0);
  delay(500); //500ms, 0.5초

}
