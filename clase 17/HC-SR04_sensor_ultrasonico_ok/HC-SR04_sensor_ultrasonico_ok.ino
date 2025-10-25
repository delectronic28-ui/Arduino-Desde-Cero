int trigger = 7;
int echo = 6;
int led = 3;
int buzzer = 8;
float tiempo_espera;
float distancia;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer,OUTPUT);

}

void loop() {
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigger, LOW);

  tiempo_espera = pulseIn(echo,HIGH);

  distancia = tiempo_espera/58;

  Serial.println(distancia);
  delay(100); 

   if(distancia < 10){
    digitalWrite(led,HIGH);
    delay(distancia*5);
    digitalWrite(led,LOW);

    digitalWrite(buzzer,HIGH);
    delay(distancia*5);
    digitalWrite(buzzer,LOW);

  }else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
  }

}