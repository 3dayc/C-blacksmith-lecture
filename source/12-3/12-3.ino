int LED_W=9 ;
// ~D9 
void setup() {
   Serial.begin(9600);
   pinMode(LED_W, OUTPUT);
}

void loop() {
  
int CDS, mapping;

CDS = analogRead(A1); // 0 ~ 1023

mapping = map(CDS, 0, 1023, 0, 255);
mapping = 255-mapping;

analogWrite(LED_W, mapping); // 0~ 255

 Serial.println("CDS :"+String(CDS)+ " LED :" +String(mapping));
// Serial.print("CDS : ");
// Serial.println(CDS);
// Serial.print("LED : ");
// Serial.println(mapping);


delay(1000);
}
