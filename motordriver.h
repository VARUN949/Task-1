#ifndef MOTORDRIVER_H
#define MOTORDRIVER_H

#include<Arduino>

class motordrive
{
  private:
  byte a,b,pwm;
  
   public:
  motordrive(byte a,byte b,byte pwm);
  void forward(byte pwm);
  void backward(byte pwm);
  void brake();
};
#endif
