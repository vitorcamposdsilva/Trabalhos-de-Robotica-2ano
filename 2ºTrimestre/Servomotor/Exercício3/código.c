#include <Servo.h>

int pin_bot=4;
int val_bot;
int pin_bot1=12;

Servo servo1;

void setup(){
    servo1.attach(3);
	pinMode(pin_bot, INPUT);
  	pinMode(pin_bot1, INPUT);
  	Serial.begin(9600);
}

void loop(){
  Serial.println(digitalRead(pin_bot));
  if (digitalRead(pin_bot) == HIGH){
   	servo1.write(180);
  }
  if (digitalRead(pin_bot1) == HIGH){
   	servo1.write(0);
  }
}