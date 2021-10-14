int pinTrigger = 3;
int pinEcho = 2;
float tempoEcho = 0;
const float velocidadeSom_mporus = 0.000340;

void setup() {
  pinMode(pinTrigger, OUTPUT);
  digitalWrite(pinTrigger, LOW);
  pinMode(pinEcho, INPUT);

  Serial.begin(9600);
  delay(100);
}

void loop() {
  float distancia;

  DisparaPulsoUltrassonico();
  tempoEcho = pulseIn(pinEcho, HIGH);
  distancia = CalculaDistancia(tempoEcho);

  Serial.print("Distancia em metros: ");
  Serial.println(distancia);

  delay(2000);
}

void DisparaPulsoUltrassonico() {
  digitalWrite(pinTrigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrigger, LOW);
}

float CalculaDistancia(float tempo_us) {
  return ((tempo_us * velocidadeSom_mporus) / 2);
}
x'