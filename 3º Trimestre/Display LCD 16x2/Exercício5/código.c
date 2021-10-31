#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pin_bot = 7;
int val_bot;
int pin_vermelho = 6;

void setup() {
  lcd.begin(16, 2);
  lcd.setCursor(2, 1);
  pinMode(pin_bot, INPUT);
  pinMode(pin_vermelho, OUTPUT);
  // código
  lcd.setCursor(0, 0);
  lcd.print("Vitor Campos");
  lcd.setCursor(0, 2);
  lcd.print("2 INF U T");
  delay(10000);
  lcd.clear();
}

void loop() {
  lcd.setCursor(0, 0);
  lcd.print("31/10/21");
  if (digitalRead(pin_bot) == HIGH) {
    lcd.setCursor(0, 2);
    delay(100);
    lcd.clear();
    digitalWrite(pin_vermelho, HIGH);
    lcd.setCursor(0, 0);
    lcd.print("31/10/21");
    lcd.setCursor(0, 2);
    lcd.print("LIGADO");
    delay(1000);
    lcd.clear();
  }
  if (digitalRead(pin_bot) == LOW) {
    lcd.setCursor(0, 2);
    digitalWrite(pin_vermelho, LOW);
    lcd.print("DESLIGADO");
  }
}
