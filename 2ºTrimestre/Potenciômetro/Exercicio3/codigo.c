int pinVermelho = 13;
int pinVerde = 11;
void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val;
    val = analogRead(A0);
    Serial.println(val);
    if (val >=512){
        digitalWrite(pinVermelho, HIGH);
    }
    else  {
        digitalWrite(pinVermelho, LOW);
    }

    if (val <=512){
        digitalWrite(pinVerde, HIGH);
    }
}
