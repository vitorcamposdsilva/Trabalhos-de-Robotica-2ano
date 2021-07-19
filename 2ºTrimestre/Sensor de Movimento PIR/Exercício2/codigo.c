int pinVermelho = 4;
int pinVerde = 6;

void setup()
{
    Serial.begin(9600);
    pinMode (2, INPUT);
    pinMode (4, OUTPUT);
    pinMode (6, OUTPUT);
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
        digitalWrite(pinVerde, LOW);
    }
    if (sensor==LOW)
    {
        Serial.println("tranquilo");
        digitalWrite(pinVermelho, LOW);
        digitalWrite(pinVerde, HIGH);
    }
}