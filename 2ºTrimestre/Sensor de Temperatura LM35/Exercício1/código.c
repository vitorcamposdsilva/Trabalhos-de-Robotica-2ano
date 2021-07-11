void setup()
{
    Serial.begin(9600);
}
void loop()
{
    float temp;
    temp = analogRead(A0);
    Serial.println(temp);
}