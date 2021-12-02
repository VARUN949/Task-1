#include<motordriver.h>

motordriver::motordriver(byte a,byte b,byte pwm)
{
  pinMode(a,OUTPUT);
   pinMode(b,OUTPUT);
    pinMode(pwm,OUTPUT);
}

void motordriver::forward(byte pwmm)
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  analogWrite(pwm,pwmm);
}
void motordriver::backward(byte pwmm)
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  analogWrite(pwm,pwmm);
}
void motordriver::brake()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
 // analogWrite(pwm,pwmm);
}
