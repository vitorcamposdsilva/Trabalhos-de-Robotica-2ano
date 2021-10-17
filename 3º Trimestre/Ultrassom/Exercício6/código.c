int pinTrigger = 3;
int pinEcho = 2;
float tempoEcho = 0;
int pinVermelho = 8;
int buzzer = 5;
int pinVerde = 11;
const float velocidadeSom_mporus = 0.000340;

void setup(){
  pinMode(pinTrigger, OUTPUT);
  digitalWrite(pinTrigger, LOW);
  pinMode (pinEcho, INPUT);
  pinMode (pinVermelho, OUTPUT);
  pinMode (pinVerde, OUTPUT);
  pinMode (buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  float distancia;

  DisparaPulsoUltrassonico();
  tempoEcho = pulseIn(pinEcho, HIGH);
  distancia=CalculaDistancia(tempoEcho);

  if (distancia >= 2.00){
    digitalWrite (pinVerde, HIGH);
  } else {
    digitalWrite (pinVerde, LOW);
  }

  if (distancia < 0.20) {
    digitalWrite (pinVermelho, HIGH);
    digitalWrite (buzzer, HIGH);
  } else {
    digitalWrite (pinVermelho, LOW);
    digitalWrite (buzzer, LOW);
  }
  
  if (distancia < 0.1) {
    digitalWrite (buzzer, HIGH);
    delay (2000);
    digitalWrite (buzzer, LOW); 
    delay (2000);
  }

  if (distancia < 0.08) {
    digitalWrite (buzzer, HIGH);
    delay (1000);
    digitalWrite (buzzer, LOW); 
    delay (1000);
  }

  if (distancia < 0.06) {
    digitalWrite (buzzer, HIGH);
    delay (100);
    digitalWrite (buzzer, LOW); 
    delay (100);
  }

  if (distancia < 0.05) {
    digitalWrite (buzzer, HIGH);
  }

  Serial.print("Distancia em metros: ");
  Serial.println(distancia);
  delay(2000);
}

void DisparaPulsoUltrassonico(){
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
}

float CalculaDistancia(float tempo_us){
  return((tempo_us*velocidadeSom_mporus)/2);
}