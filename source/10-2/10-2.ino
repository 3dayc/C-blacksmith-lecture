int bz=11;

void setup() {
  pinMode(bz,OUTPUT);
}


void loop() {
   analogWrite(bz,50);
   delay(1000);
   analogWrite(bz,100);
   delay(1000);
   analogWrite(bz,150);
   delay(1000);
   analogWrite(bz,200);
   delay(1000);
   analogWrite(bz,250);
   delay(1000);
}
