#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pin_bot=7;
int val_bot;

void setup() {
  pinMode(pin_bot, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(2,1);
}

void loop() {
  if(digitalRead(pin_bot) == HIGH){
  delay(100);
    lcd.clear();
    lcd.print("LIGADO");
    delay(1000);
    lcd.clear();
  }
  if(digitalRead(pin_bot) == LOW){
  lcd.setCursor(0, 0);
  lcd.print("DESLIGADO");
  }
}