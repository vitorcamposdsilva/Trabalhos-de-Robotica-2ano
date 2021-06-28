int pinVermelho = 2;
float s = A0;
float t = 0;

void setup(){
    Serial.begin(9600);
    pinMode(s,INPUT);
}

void loop(){
    t = map (((analogRead(s)-20)* 3.04) , 0 , 1023 , -40 , 125);
    Serial.println(t);
    if  (t >30.00){
        digitalWrite(pinVermelho, HIGH);
    }
    if  (t <30.00){
        digitalWrite(pinVermelho, LOW);
    }
}
