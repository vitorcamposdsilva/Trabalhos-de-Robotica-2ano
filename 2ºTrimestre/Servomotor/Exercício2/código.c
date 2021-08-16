#include <Servo.h>

int pin_bot=4;
int val_bot;


Servo servo1;

void setup(){
    servo1.attach(3);
	pinMode(pin_bot, INPUT);
}

void loop(){
  if (digitalRead(pin_bot) == HIGH){
   	servo1.write(180);
  }
  if (digitalRead(pin_bot) == LOW){
   	servo1.write(0);
  }
}