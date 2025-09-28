int pina0 = A0;
int pin6 = 6;
int valorpot;
int del = 400;

void setup() {
  Serial.begin(9600);
  pinMode(pina0,INPUT);
  pinMode(pin6,OUTPUT);

}

void loop() {
  valorpot = analogRead(pina0);
  Serial.println(valorpot);
  delay(del);

  while(valorpot>500){
    digitalWrite(pin6,HIGH);
    valorpot = analogRead(pina0);
  Serial.println(valorpot);
  delay(del);

  }
  digitalWrite(pin6,LOW);

}
