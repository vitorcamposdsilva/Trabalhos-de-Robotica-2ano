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
    if (val <200){
        digitalWrite(pinVermelho, HIGH);
        delay(2000);
        digitalWrite(pinVermelho, LOW);
        delay(6000); 
    }
    if (val <200){
        delay(250);
        digitalWrite(pinVerde, HIGH);
        delay(2000);
        digitalWrite(pinVerde, LOW);
        delay(4000); 
    }
    if (val <200){
        delay(500);
        digitalWrite(pinAmarelo, HIGH);
        delay(2000);
        digitalWrite(pinAmarelo, LOW);
        delay(2000);
    }
    if (val <200){
        delay(750);
        digitalWrite(pinAzul, HIGH);
        delay(2000);
        digitalWrite(pinAzul, LOW);
    }
    // 2
    if (val <200){
        digitalWrite(pinVermelho, HIGH);
        delay(2000);
        digitalWrite(pinVermelho, LOW);
        delay(4000); 
    }
    if (val >200){
        delay(250);
        digitalWrite(pinVerde, HIGH);
        delay(1000);
        digitalWrite(pinVerde, LOW);
        delay(2000); 
    }
    if (val >200){
        delay(500);
        digitalWrite(pinAmarelo, HIGH);
        delay(1000);
        digitalWrite(pinAmarelo, LOW);
        delay(1000);
    }
    if (val >200){
        delay(750);
        digitalWrite(pinAzul, HIGH);
        delay(1000);
        digitalWrite(pinAzul, LOW);
    }
}