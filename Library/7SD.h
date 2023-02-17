#ifndef S7SD_H

#define S7SD_H

#include <Arduino.h>

class S7SD{
  private:
    byte pinA;
    byte pinB;
    byte pinC;
    byte pinD;
    byte pinE;
    byte pinF;
    byte pinG;

  public:
    S7SD(byte pinA, byte pinB, byte pinC, byte pinD, byte pinE, byte pinF, byte pinG);

    void init();

    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();
    void nine();
    void zero();
    void off();
};

#endif
