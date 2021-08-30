int esquerdo = 8;
int direito = 9;
int bot_esquerdo = 3;
int bot_direito = 2;
void setup()
{
    pinMode(esquerdo, OUTPUT);
    pinMode(direito, OUTPUT);
    pinMode(bot_esquerdo, INPUT);
    pinMode(bot_direito, INPUT);
}
void loop()
{
    if (digitalRead(bot_esquerdo) == HIGH){
   	   digitalWrite(esquerdo, HIGH);
       delay(500);
       digitalWrite(esquerdo, LOW);
       delay(500);
       digitalWrite(direito, HIGH);
       delay(500);
       digitalWrite(direito, LOW);
       delay(500);
    }
    if (digitalRead(bot_esquerdo) == LOW){
   	   digitalWrite(esquerdo, LOW);
    }
    //direito
    if (digitalRead(bot_direito) == HIGH){
   	   digitalWrite(direito, HIGH);
       delay(500);
       digitalWrite(direito, LOW);
       delay(500);
       digitalWrite(esquerdo, HIGH);
       delay(500);
       digitalWrite(esquerdo, LOW);
       delay(500);
    }
    if (digitalRead(bot_direito) == LOW){
   	   digitalWrite(direito, LOW);
    }
}