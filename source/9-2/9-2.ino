
int LED = 8, SW = 10;

void setup() {
 pinMode(LED, OUTPUT);
 pinMode(SW, INPUT);
}

void loop() {
 int sw_value ;
 
 sw_value = digitalRead(SW);
 
 if(sw_value==0) digitalWrite(LED,0);
 else if(sw_value==1) digitalWrite(LED,1);

}
