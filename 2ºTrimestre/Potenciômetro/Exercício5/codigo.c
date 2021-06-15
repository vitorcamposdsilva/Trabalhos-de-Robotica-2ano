int pinVermelho = 13;
int pinVerde = 11;
int pinAmarelo = 9;
int pinAzul = 8;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val;
    val = analogRead(A0);
    Serial.println(val);
    if (val >=200){
        digitalWrite(pinVermelho, HIGH);
    }
    if (val >400){
        digitalWrite(pinVerde, HIGH);
    }
    if (val >600){
        digitalWrite(pinAmarelo, HIGH);
    }
    if (val >800){
        digitalWrite(pinAzul, HIGH);
    }
}