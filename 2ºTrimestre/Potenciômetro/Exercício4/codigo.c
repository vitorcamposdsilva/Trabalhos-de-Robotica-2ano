int pinVermelho = 2;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val;
    val = analogRead(A0);
    Serial.println(val);
    if (val <=10){
        digitalWrite(pinVermelho, HIGH);
        delay(500);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=50){
        digitalWrite(pinVermelho, HIGH);
        delay(800);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=200){
        digitalWrite(pinVermelho, HIGH);
        delay(900);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=450){
        digitalWrite(pinVermelho, HIGH);
        delay(1000);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=500){
        digitalWrite(pinVermelho, HIGH);
        delay(1200);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=800){
        digitalWrite(pinVermelho, HIGH);
        delay(1400);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=1000){
        digitalWrite(pinVermelho, HIGH);
        delay(1500);
        digitalWrite(pinVermelho, LOW);
    }
    if (val <=1023){
        digitalWrite(pinVermelho, HIGH);
        delay(2500);
        digitalWrite(pinVermelho, LOW);
    }
}