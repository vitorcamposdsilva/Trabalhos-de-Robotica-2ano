float t = 0;
int s = A0;
int pinVermelho = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(pinVermelho, OUTPUT);
}

void loop()
{
  t = map (((analogRead(s)-20)* 3.04) , 0 , 1023 , -40 , 125);
  Serial.println(t);
  int val;
  val = analogRead(A1);
  Serial.println(val);
  if (val >=511){
        digitalWrite(pinVermelho, HIGH);
    }
    else  {
        digitalWrite(pinVermelho, LOW);
    }
}