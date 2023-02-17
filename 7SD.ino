#include <7SD.h>

#define ledpinA 22
#define ledpinB 24
#define ledpinC 26
#define ledpinD 28
#define ledpinE 30
#define ledpinF 32
#define ledpinG 34

S7SD ssd(ledpinA, ledpinB, ledpinC, ledpinD, ledpinE, ledpinF, ledpinG);
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  
  ssd.one();
  delay(delayTime);
  ssd.two();
  delay(delayTime);
  ssd.three();
  delay(delayTime);
  ssd.four();
  delay(delayTime);
  ssd.five();
  delay(delayTime);
  ssd.six();
  delay(delayTime);
  ssd.seven();
  delay(delayTime);
  ssd.eight();
  delay(delayTime);
  ssd.nine();
  delay(delayTime);
  ssd.zero();
  delay(delayTime);
  ssd.off();
  delay(delayTime);
  }
