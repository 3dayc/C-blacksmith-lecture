int LED_R=8, LED_W=9, SW=10;
int sw_value = 0;
int cnt = 0;

void setup() {
   pinMode(LED_R, OUTPUT);
   pinMode(LED_W, OUTPUT);
   pinMode(SW,INPUT);
}

void loop() {

 sw_value = digitalRead(SW);
 if(sw_value==1){
                digitalWrite(LED_R,1); 
                digitalWrite(LED_W,0);
                delay(500);
               
                digitalWrite(LED_R,0); 
                digitalWrite(LED_W,1);
                delay(500);
   }
 else {      
                digitalWrite(LED_R,0); 
                digitalWrite(LED_W,0);                    
 }
}                          
  
