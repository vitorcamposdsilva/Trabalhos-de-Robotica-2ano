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
    }
    
}