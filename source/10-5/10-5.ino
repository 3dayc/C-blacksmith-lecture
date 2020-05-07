#include "pitches.h"

int SW = 10, bz=11;

int melody[8] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, 
                  NOTE_B5, NOTE_C6 };
                  
int sw_value = 0, sw_value1 = 0;
int cnt = 0;
                 
void setup() {
pinMode(SW,INPUT); 
pinMode(bz,OUTPUT);

}

void loop(){
 
  sw_value = digitalRead(SW);

 if(sw_value1==0 && sw_value==1){
              tone(bz,melody[cnt++]); 
              delay(500);
              noTone(bz);
              if(cnt >=8 ) cnt = 0;

  }
   sw_value1 = sw_value ;
 }
