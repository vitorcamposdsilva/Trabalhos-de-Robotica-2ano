int pinVermelho = 13;
int pinVerde = 12;

void setup()
{
    Serial.begin(9600);

    pinMode(pinVermelho, OUTPUT);
    pinMode(pinVerde, OUTPUT);
}

void loop()
{
    int val;
    int ldr;

    val = analogRead (A0);
    ldr = analogRead (A0);

    Serial.println(val);
    Serial.print ("Monitor Serial =");

    //pinVermelho
    if (ldr <= 860) {
        digitalWrite(pinVermelho, HIGH);
    }
    else if (ldr >= 860); {
        digitalWrite(pinVermelho, LOW);
    }
    //pinVerde
    if (ldr >=860) {
        digitalWrite(pinVerde, HIGH); 
    }
    else if (ldr <= 860); {
        digitalWrite(pinVerde, low);
    }
}