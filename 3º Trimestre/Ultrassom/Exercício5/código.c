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
  pinMode(pinEcho, INPUT);
  pinMode(pinVermelho, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(pinVerde, OUTPUT);
 
  Serial.begin(9600);
  delay(100);
}

void loop(){
  float distancia;
  
  DisparaPulsoUltrassonico();
  tempoEcho = pulseIn(pinEcho, HIGH);
  distancia=CalculaDistancia(tempoEcho);
  
  Serial.print("Distancia em metros: ");
  Serial.println(distancia);
  
  delay(2000);
  if (distancia <= 0.20){
    digitalWrite(pinVermelho, HIGH);
  }
  if (distancia > 0.20){
    digitalWrite(pinVermelho, LOW);
  }
  if (distancia <= 0.10){
    digitalWrite(buzzer, HIGH);
  }
  if (distancia > 0.10){
    digitalWrite(buzzer, LOW);
  }
  if (distancia <= 0.10){
    digitalWrite(buzzer, HIGH);
  }
  if (distancia > 2.00){
    digitalWrite(pinVerde, HIGH);
  }
  if (distancia <= 2.00){
    digitalWrite(pinVerde, LOW);
  }
}

void DisparaPulsoUltrassonico(){
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
}

float CalculaDistancia(float tempo_us){
  return((tempo_us*velocidadeSom_mporus)/2);
}