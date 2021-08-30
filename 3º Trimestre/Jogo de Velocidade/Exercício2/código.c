int esquerdo = 8;
int direito = 9;
void setup()
{
    pinMode(esquerdo, OUTPUT);
    pinMode(direito, OUTPUT);
}
void loop()
{
    digitalWrite(esquerdo, HIGH);
    delay(1000);
    digitalWrite(esquerdo, LOW);
    delay(1000);
    //direito
    digitalWrite(direito, HIGH);
    delay(1000);
    digitalWrite(direito, LOW);
    delay(1000);    
}