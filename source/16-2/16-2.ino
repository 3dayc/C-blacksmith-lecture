int LED = 8 ;

void setup() {
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
int IR_val;

 IR_val= analogRead(A1);
 Serial.print(IR_val);
 
 if(IR_val >250) {
         digitalWrite(LED,1);
         Serial.println(" LED ON");
 }
  else { 
       digitalWrite(LED,0);
       Serial.println(" LED OFF");
  }
 

 delay(500);
}
