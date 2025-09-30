int pin1 = 7;
int pin2 = 8;
int pin3 = 9;
int pin4 = 10;

int del = 1000;
int delt = 2000;

void setup() {
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  pinMode(pin3,OUTPUT);
  pinMode(pin4,OUTPUT);

}

void loop() {
  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);
  digitalWrite(pin3,LOW); // cero
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW); // uno
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH);  // dos
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH); // tres
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW);  // cuatro
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);  // cinco
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH); // seis
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,HIGH);  // siete
  digitalWrite(pin4,LOW);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW); // ocho
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW); // nueve
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH); // diez
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,HIGH); // once
  digitalWrite(pin2,HIGH);
  digitalWrite(pin3,LOW);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,LOW); // doce
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,LOW);  // trece
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,LOW);
  digitalWrite(pin2,HIGH); // catorce
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(del);

  digitalWrite(pin1,HIGH);
  digitalWrite(pin2,HIGH); // quince
  digitalWrite(pin3,HIGH);
  digitalWrite(pin4,HIGH);
  delay(del);

  delay(delt);


}
