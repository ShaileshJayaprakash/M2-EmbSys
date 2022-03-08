#ifndef OUT_H
#define OUT_H
#include <Arduino.h>

void setupoutput(byte pin1,byte pin2);
void outputforward(byte pin1,byte pin2);
void outputreverse(byte pin1,byte pin2);
void outputstop(byte pin1,byte pin2);

#endif
