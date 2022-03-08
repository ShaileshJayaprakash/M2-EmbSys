#include "out.h"
#define wiperpin1 8
#define wiperpin2 9
int sensorPin = A0;  
int sensorValue = 0; 

void setup() {
  setupoutput(wiperpin1,wiperpin2);

}

void loop() {
  sensorValue = analogRead(sensorPin);
  if(sensorValue>500)
  {
    outputforward(wiperpin1,wiperpin2);
    delay(2000);
    outputreverse(wiperpin1,wiperpin2);
    delay(2000);

  }
  else{
    outputstop(wiperpin1,wiperpin2);

  }
}
