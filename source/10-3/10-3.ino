int bz=11;

void setup() {
  // put your setup code here, to run once:
pinMode(bz,OUTPUT);
}

void loop(){
tone(bz, 523); //11핀의 버저를 523Hz로 소리를 낸다.(도)
delay(500);
tone(bz, 587); //587Hz로 소리를 낸다.(레)
delay(500);
tone(bz, 659); //659Hz로 소리를 낸다.(미)
delay(500);
tone(bz, 698); //698Hz로 소리를 낸다.(파)
delay(500);
tone(bz, 784); //784Hz로 소리를 낸다.(솔)
delay(500);
tone(bz,880); //880Hz로 소리를 낸다.(라)
delay(500);
tone(bz, 988); //988Hz로 소리를 낸다.(시)
delay(500);
tone(bz,1047); //1047Hz로 소리를 낸다.(도)
delay(500);
noTone(bz); //소리를 중지한다.
delay(500);
}
