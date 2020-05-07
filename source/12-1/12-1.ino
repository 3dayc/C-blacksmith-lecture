void setup() {
  
  Serial.begin(9600);
}

void loop() {
int CDS;
  
   CDS = analogRead(A1);
   Serial.println(CDS);
   delay(500);
}
