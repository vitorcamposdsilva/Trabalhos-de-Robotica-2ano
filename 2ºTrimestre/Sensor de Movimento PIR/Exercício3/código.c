int pinLaranja = 2;
int pinVermelho = 4;
int pinVerde = 6;
int pinBranco = 13;

void setup()
{
    Serial.begin(9600);
    pinMode (12, INPUT);
    pinMode (pinLaranja, OUTPUT);
    pinMode (pinVermelho, OUTPUT);
    pinMode (pinVerde, OUTPUT);
    pinMode (pinBranco, OUTPUT);
}

void loop()
{
    int sensor;

    sensor = digitalRead(2);
    Serial.println(sensor);
    if (sensor==HIGH)
    {
        digitalWrite(pinLaranja, HIGH);
        delay(800);
        digitalWrite(pinLaranja,LOW);
        delay(800);
        digitalWrite(pinVermelho, HIGH);
    }
}