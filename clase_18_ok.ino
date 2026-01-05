// SERVO //
#include <Servo.h>
Servo myservo;
int pos = 0;

// SENSOR DE DISTANCIA //
int trigger = 7;
int echo = 6;
float tiempo_espera;
float distancia;
int angulo = 0;

void setup() {
  myservo.attach(9, 400, 2400);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  
}

void loop() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  tiempo_espera = pulseIn(echo, HIGH);
  distancia = tiempo_espera / 58.2;

  angulo = map(distancia,0,60,0,180);

  myservo.write(angulo);

  

 
}