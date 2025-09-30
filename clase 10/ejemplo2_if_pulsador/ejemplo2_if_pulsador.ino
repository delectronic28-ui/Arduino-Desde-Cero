int pina0 = A0;
int pin8 = 8;
float pot;
int del = 500;

void setup() {
  pinMode(pina0,INPUT);
  pinMode(pin8,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  pot = (5.0*analogRead(pina0))/1023.0;

  if(pot>3){ // CAMBIAR POR ==5
    digitalWrite(pin8,HIGH);

  }
  if(pot<=3){ // CAMBIAR POR !=5
    digitalWrite(pin8,LOW);

  }
  Serial.print(pot);
  delay(del);

}
