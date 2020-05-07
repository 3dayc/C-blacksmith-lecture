
int Reed=11 ;

void setup() {
  Serial.begin(9600);
  pinMode(Reed, INPUT);
}

void loop() {
int Reed_val;

Reed_val=digitalRead(Reed);
Serial.println(Reed_val);

delay(500);
}
