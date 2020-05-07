int LED_W=9 ;

void setup() {
   Serial.begin(9600);
   pinMode(LED_W, OUTPUT);
}

void loop() {
  
int CDS;

CDS = analogRead(A1);
Serial.println(CDS);

if(CDS >700 ) { 
            digitalWrite(LED_W, 0);
            Serial.println("LED OFF");
}
else {
             digitalWrite(LED_W,1);
             Serial.println("LED ON");
}

delay(1000);
}
