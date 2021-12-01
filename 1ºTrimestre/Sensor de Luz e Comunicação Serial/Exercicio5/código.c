int pinVermelho = 13;
int pinVerde = 12;
void setup(){
    Serial.begin (9600);
    pinMode (pinVermelho, OUTPUT);
    pinMode (pinVerde, OUTPUT);
}
void loop(){
    int val;
    int ldr;
    val = analogRead (A0);
    ldr = analogRead (A0);
    if (ldr <= 860){
        Serial.println ("Boa Noite");
        digitalWrite (pinVermelho, HIGH);
        digitalWrite (pinVermelho, LOW); 
    }
    else if (ldr >= 860){
        Serial.println ("Bom Dia");
        digitalWrite (pinVerde, HIGH);
        digitalWrite (pinVerde, LOW);
    }
}