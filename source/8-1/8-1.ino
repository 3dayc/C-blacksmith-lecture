void setup() {
   pinMode(8, OUTPUT);
}

void loop() {
 digitalWrite(8,HIGH); // digitalWrite(8,1);
 delay(500);
 
 digitalWrite(8,LOW); // digitalWrite(8,0);
 delay(500);
}
