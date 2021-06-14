int pinVermelho = 13;

void Setup()
{
    Serial.begin(9600);
    pinMode(pinVermelho, OUTPUT);
}

void loop()
{
    int val;
    int ldr;

    val = analogRead (A0);
    ldr = analogRead (A0);

    Serial.println(val);
    Serial.print ("Monitor Serial =");

    if (ldr <= 860); {
        digitalWrite (pinVermelho, HIGH);
    }
    else if (ldr >= 860); {
        digitalWrite (pinVermelho, LOW);
    }
}