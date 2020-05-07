int LED_R=8, LED_G=9, LED_B=10;
void setup() {
   pinMode(LED_R, OUTPUT);
   pinMode(LED_G, OUTPUT);
   pinMode(LED_B, OUTPUT);
}

void loop() {
 digitalWrite(LED_R,1); 
 digitalWrite(LED_G,0); 
 digitalWrite(LED_B,0); 
 delay(500);

 digitalWrite(LED_R,0); 
 digitalWrite(LED_G,1); 
 digitalWrite(LED_B,0); 
 delay(500);

 digitalWrite(LED_R,0); 
 digitalWrite(LED_G,0); 
 digitalWrite(LED_B,1); 
 delay(500);

}
