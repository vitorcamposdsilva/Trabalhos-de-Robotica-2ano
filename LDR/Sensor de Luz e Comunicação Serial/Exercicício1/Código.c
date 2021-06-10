void setup()
{
    Serial.begin(9660);
}

void loop()
{
    int val;
    val = analogRead (A0);
    Serial.println(val);
}