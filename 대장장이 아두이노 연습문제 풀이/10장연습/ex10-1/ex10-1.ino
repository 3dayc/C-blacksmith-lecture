#include "pitches.h"
int SW=10, bz=11;
int sw_value = 0, sw_value1 = 0;
int melody[8] = { NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, 
                  NOTE_B5, NOTE_C6 };
void setup() {
   pinMode(SW,INPUT);
   pinMode(bz, OUTPUT);
   
}

void loop() {

 sw_value = digitalRead(SW);
 if(sw_value1==0 && sw_value==1) { 
                            rabbitSong();
                           
  }
   sw_value1 = sw_value ;
}                          

// 도 0, 레 1, 미 2, 파 3, 솔 4, 라 5,시 6,도 7
void rabbitSong(){
     tone(bz,melody[4]);
     delay(1000);
     noTone(bz);
     tone(bz,melody[2]);
     delay(500);
     noTone(bz);
     tone(bz,melody[2]);
     delay(500);
     noTone(bz);
     tone(bz,melody[4]);
     delay(500);
     tone(bz,melody[2]);
     delay(500);
     tone(bz,melody[0]);
     delay(1000);

     tone(bz,melody[1]);
     delay(1000);
     noTone(bz);
     tone(bz,melody[2]);
     delay(500);
     noTone(bz);
     tone(bz,melody[1]);
     delay(500);
     noTone(bz);

     tone(bz,melody[0]);
     delay(500);
     noTone(bz);
     tone(bz,melody[2]);
     delay(500);
     noTone(bz);
     tone(bz,melody[4]);
     delay(1000);
     noTone(bz);

     tone(bz,melody[7]);
     delay(750);
     noTone(bz);
     tone(bz,melody[4]);
     delay(250);
     noTone(bz);
     tone(bz,melody[7]);
     delay(500);
     noTone(bz);
     tone(bz,melody[4]);
     delay(500);
     noTone(bz);

     tone(bz,melody[7]);
     delay(500);
     noTone(bz);
     tone(bz,melody[4]);
     delay(500);
     noTone(bz);
     tone(bz,melody[2]);
     delay(1000);
     noTone(bz);

     tone(bz,melody[4]);
     delay(1000);
     noTone(bz);
     tone(bz,melody[1]);
     delay(500);
     noTone(bz);
     tone(bz,melody[3]);
     delay(500);
     noTone(bz);

     tone(bz,melody[2]);
     delay(500);
     noTone(bz);
     tone(bz,melody[1]);
     delay(500);
     noTone(bz);
     tone(bz,melody[0]);
     delay(1000);
     noTone(bz);
}
