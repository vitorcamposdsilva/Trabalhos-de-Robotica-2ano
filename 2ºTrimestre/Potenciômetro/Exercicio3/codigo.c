int pinVermelho = 2;
int pinVerde = 3;
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