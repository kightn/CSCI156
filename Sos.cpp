#include "Sos.h"

int pin = 13; //structured data; assigning led pin to 13 

void setup(){
  pinMode(pin, OUTPUT);
}

void loop(){
  Sos.light();
  Sos.dot(); Sos.dot(); Sos.dot(); //functions
  Sos.dash(); Sos.dash(); Sos.dash();
  Sos.dot(); Sos.dot(); Sos.dot();
  Morsecode.light();
}