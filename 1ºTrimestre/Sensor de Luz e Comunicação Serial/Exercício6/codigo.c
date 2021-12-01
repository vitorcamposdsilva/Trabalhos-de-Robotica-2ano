int pinVermelho = 13;
int pinVerde = 12;
int pinAmarelo = 11;
int pinLaranja = 10;
int pinAzul = 9;
void setup(){
    Serial.begin (9600);
    pinMode (pinVermelho, OUTPUT);
    pinMode (pinVerde, OUTPUT);
    pinMode (pinAmarelo, OUTPUT);
    pinMode (pinLaranja, OUTPUT);
    pinMode (pinAzul, OUTPUT);
}
void loop(){
    int val;
    int ldr;
    val = analogRead (A0);
    ldr = analogRead (A0);
    Serial.println (ldr);
    //pinVermelho
    if (ldr >= 860){
        digitalWrite (pinVermelho, HIGH);
        digitalWrite (pinVerde, LOW);
        digitalWrite (pinAmarelo, LOW);
        digitalWrite (pinLaranja, LOW);
        digitalWrite (pinAzul, LOW);
    }
    else if (ldr <= 860){
        digitalWrite (pinVermelho, LOW);
        digitalWrite (pinVerde, HIGH);
        digitalWrite (pinAmarelo, LOW);
        digitalWrite (pinLaranja, LOW);
        digitalWrite (pinAzul, LOW);
    }
    //pinVerde
    if ((ldr >= 100) && (ldr < 860)){
        digitalWrite (pinVermelho, LOW);
        digitalWrite (pinVerde, HIGH);
        digitalWrite (pinAmarelo, LOW);
        digitalWrite (pinLaranja, LOW);
        digitalWrite (pinAzul, LOW);
    }
    else if ((ldr >= 100) && (lar < 860)){
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, LOW);
    }
    //pinAmarelo
    if ((ldr >= 70) && (ldr 100)){
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, HIGH);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, LOW);
    }
    else if ((ldr >= 70)&& (ldr <100)){
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, LOW);
    }
    //pinLaranja
    if ((ldr >= 60) && (ldr < 70)){
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, HIGH);
        digitalWrite(pinAzul, LOW);
    }
    else if ((ldr >= 60)&& (ldr <70)) {
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, LOW);
    }
    //pinAzul
    if ((ldr >= 49) && (ldr < 60)) {
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, HIGH);
    }
    else if ((ldr >= 49)&& (ldr <60)) {
        digitalWrite(pinVermelho, LOW);        
        digitalWrite(pinVerde, LOW);
        digitalWrite(pinAmarelo, LOW);
        digitalWrite(pinLaranja, LOW);
        digitalWrite(pinAzul, LOW);
    }
}