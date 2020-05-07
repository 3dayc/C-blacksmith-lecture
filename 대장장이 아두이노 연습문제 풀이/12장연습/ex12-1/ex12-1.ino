int LED_W=9 ;
int LED_B=10;

void setup() {
Serial.begin(9600);
pinMode(LED_W, OUTPUT);
pinMode(LED_B, OUTPUT);
}

void loop() {
int CDS, Inverse_CDS, mapping1, mapping2;
String echoStr="";

CDS = analogRead(A1);
Inverse_CDS = 1023-CDS ;
mapping1 = map(CDS, 0, 1023, 0, 255);
mapping2 = map(Inverse_CDS, 0, 1023, 0, 255); 
analogWrite(LED_W, mapping1);
analogWrite(LED_B, mapping2);

echoStr ="        CDS :"+String(        CDS)+ " LED :" +String(mapping2);
Serial.println(echoStr);
echoStr ="Inverse_CDS :"+String(Inverse_CDS)+ " LED :" +String(mapping2);
Serial.println(echoStr);
Serial.println();

delay(1000);
}
