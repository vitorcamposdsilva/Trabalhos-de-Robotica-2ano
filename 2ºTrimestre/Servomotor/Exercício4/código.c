#include <Servo.h>

int pin_bot=4;
int val_bot;

Servo servo1;

void setup(){
    servo1.attach(3);
	pinMode(pin_bot, INPUT);
  	Serial.begin(9600);
}

void loop(){
  Serial.println(digitalRead(pin_bot));
  if (digitalRead(pin_bot) == HIGH){
   	servo1.write(180);
    delay(100);
    servo1.write(0);
    delay(1000);
    servo1.write(180);
    delay(1000);
  }
  if (digitalRead(pin_bot) == LOW){
   	servo1.write(0);
  }
}