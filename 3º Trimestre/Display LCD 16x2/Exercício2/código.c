#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2,1);
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("Vitor");
  lcd.setCursor(0, 2);
  lcd.print("2 INF U T");
}