int bz=11;

void setup() {
  pinMode(bz,OUTPUT);
}

void loop() {
  digitalWrite(bz,1);
  delay(1000);

  digitalWrite(bz,0);
  delay(1000);
 }
