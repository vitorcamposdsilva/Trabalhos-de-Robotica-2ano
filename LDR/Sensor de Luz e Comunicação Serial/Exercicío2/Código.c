void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int val;
    int ldr;

    val = analogRead (A0);
    ldr = analogRead (A0);

    Serial.println (val);
    Serial.print ("Monitor Serial =");
}