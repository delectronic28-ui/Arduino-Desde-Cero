int pin1 = 7;
int pin2 = 8;
int del = 1000;

void setup() {
  pinMode(pin1, INPUT);
  pinMode(pin2, OUTPUT);
}
// > , < , <= , >= ;== ; !=

void loop() {
  int boton = digitalRead(pin1);

  if (boton == 1) {
    delay(del);
    digitalWrite(pin2,HIGH);

  }else{
    delay(del);
    digitalWrite(pin2,LOW);
  }
}
