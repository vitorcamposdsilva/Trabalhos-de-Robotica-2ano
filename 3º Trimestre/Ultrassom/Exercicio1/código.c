int pinTrigger = 3;
int pinEcho = 2;
float tempoEcho = 0;
const float velocidadeSom_mporus = 0.000340;

void setup(){
    pinMode(pinTrigger, OUTPUT);
    digitalWrite(pinTrigger, LOW);
    pinMode(pinEcho, INPUT);

    Serial.begin(9600);
    delay(100);
}