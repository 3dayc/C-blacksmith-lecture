
#include "pitches.h"

int bz=11;

void setup() {
  pinMode(bz,OUTPUT);
}

void loop(){
tone(bz, NOTE_C5); //11핀의 버저를 523Hz로 소리를 낸다.(도)
delay(500);
tone(bz, NOTE_D5); //587Hz로 소리를 낸다.(레)
delay(500);
tone(bz, NOTE_E5); //659Hz로 소리를 낸다.(미)
delay(500);
tone(bz, NOTE_F5); //698Hz로 소리를 낸다.(파)
delay(500);
tone(bz, NOTE_G5); //784Hz로 소리를 낸다.(솔)
delay(500);
tone(bz,NOTE_A5); //880Hz로 소리를 낸다.(라)
delay(500);
tone(bz, NOTE_B5); //988Hz로 소리를 낸다.(시)
delay(500);
tone(bz,NOTE_C6); //1047Hz로 소리를 낸다.(도)
delay(500);
noTone(bz); //소리를 중지한다.
delay(500);
}
