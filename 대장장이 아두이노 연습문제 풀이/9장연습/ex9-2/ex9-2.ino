int LED_W=9, SW=10;
int sw_value = 0, sw_value1 = 0;
int brightness = 0;

void setup() {
   pinMode(LED_W, OUTPUT);
   pinMode(SW,INPUT);
   Serial.begin(9600) ;
}

void loop() {

 sw_value = digitalRead(SW);
 if(sw_value1==0 && sw_value==1) { 
                             brightness += 10;
                             if(brightness > 255) brightness = 0; 
                             analogWrite(LED_W,brightness);
                             Serial.println(brightness);
                             
  }
   sw_value1 = sw_value ;
}                          
  
