float t = 0;
int s = A0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
  t = map (((analogRead(s)-20)* 3.04) , 0 , 1023 , -40 , 125);
  Serial.println(t);
  int val;
  val = analogRead(A1);
  Serial.println(val);
}
