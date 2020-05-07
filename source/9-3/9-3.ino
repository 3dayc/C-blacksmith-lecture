
int LED = 8, SW = 10;

int cnt = 0;
int sw_value = 0, sw_value1 = 0;

void setup() {
 pinMode(LED, OUTPUT);
 pinMode(SW, INPUT);
 Serial.begin(9600) ;
}

void loop() {
 
 sw_value = digitalRead(SW);

 if(sw_value1==0 && sw_value==1) { 
                             cnt ++;
                             Serial.println(cnt);
  }
   sw_value1 = sw_value ;
}
