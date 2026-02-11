// SERVO //
#include <Servo.h>
Servo myservo;
int angulo = 90;

// SENSOR DE DISTANCIA //
int trigger = 7;
int echo = 6;
float tiempo_espera;
float distancia;

bool activado = false;   // bandera para evitar activaciones repetidas

void setup() {
  myservo.attach(9, 400, 2400);
  myservo.write(0);      // posición inicial
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // Disparo del sensor ultrasónico
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  tiempo_espera = pulseIn(echo, HIGH);
  distancia = tiempo_espera / 58.2;

  // Si detecta algo y aún no se ha activado
  if (distancia < 10 && activado == false) {
    myservo.write(angulo);   // mover servo
    activado = true;         // bloquear nuevas activaciones
    delay(3000);             // esperar 3 segundos
    myservo.write(0);        // volver a la posición inicial
  }

  // Cuando no hay objeto, se vuelve a habilitar
  if (distancia >= 10) {
    activado = false;
  }

  delay(50); // pequeño delay para estabilidad
}
