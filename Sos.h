#ifndef SOS_H
#define SOS_H

include "Arduino.h"

class Morsecode //class
{
  public:
    Sos(int pin); //encapsulation
    void dot();
    void dash();
    void light();
  private:
    int _pin;
    
    Morsecode(); //constructor
    void light(){
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
    }
    
    ~Morsecode(); //deconstructor
};

class Sos : public Morsecode // inheritance
{
  Sos::light(){   //overloading light() function
    digitalWrite(pin, HIGH);
    delay(2000);
    digitalWrite(pin, LOW);
  }
Sos::dot(){
  delay(250);
  digitalWrite(pin, HIGH);
  delay(250);
  digitalWrite(pin, LOW);
}

Sos::dash(){
  delay(250);
  digitalWrite(pin, HIGH);
  delay(750);
  digitalWrite(pin, LOW);
}
}
#endif