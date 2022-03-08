#include "out.h"

void setupoutput(byte pin1,byte pin2)
{
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}


void outputforward(byte pin1,byte pin2)
{
 digitalWrite(pin1, HIGH);   
 digitalWrite(pin2, LOW);    
}

void outputreverse(byte pin1,byte pin2)
{
 digitalWrite(pin2, HIGH);                        
 digitalWrite(pin1, LOW);    
}

void outputstop(byte pin1,byte pin2)
{
 digitalWrite(pin1, LOW);                        
 digitalWrite(pin2, LOW);     
}
