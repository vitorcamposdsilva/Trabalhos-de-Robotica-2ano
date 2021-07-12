int pinVermelho = 4;
int pinVerde = 8;

void setup()
{
    Serial.begin(9600);
    pinMode (2, INPUT);
}

void loop()
{
    int sensor;
    
    sensor = digitalRead(2);
    Serial.println(sensor);
    if (sensor==HIGH)
    {
        Serial.println("ALERTA VERMELHO!!!");
        digitalWrite(pinVermelho, HIGH);
        delay(2000);
    }
    if (sensor==LOW)
    {
        Serial.println("ALERTA VERMELHO!!!");
        digitalWrite(pinVermelho, LOW);
        delay(2000);
    }

    if (sensor==LOW)
    {
        Serial.println("Tranquilo");
        digitalWrite(pinVerde, HIGH);
        delay(2000);
        digitalWrite(pinVerde, LOW);
    }

    if (sensor==HIGH)
    {
        Serial.println("Tranquilo");
        digitalWrite(pinVerde, LOW);
        delay(2000);
    }
}