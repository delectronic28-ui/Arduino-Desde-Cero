int pinmix = 5;
int pinverde = 6;
int pinrojo = 7;
int valorled;
String mensaje1 = "Escriba valor para encender LED: ";
void setup() {
  Serial.begin(9600);
  pinMode(pinmix, OUTPUT);
  pinMode(pinverde, OUTPUT);
  pinMode(pinrojo, OUTPUT);
}

void loop() {
  Serial.println(mensaje1);
  while (Serial.available() == 0) {
  }
  valorled = Serial.parseInt();
  Serial.read();

  switch(valorled){
    case 1:
    digitalWrite(pinmix,HIGH);
    digitalWrite(pinverde,LOW);
    digitalWrite(pinrojo,LOW);
    break;

    case 2:
    digitalWrite(pinmix,LOW);
    digitalWrite(pinverde,HIGH);
    digitalWrite(pinrojo,LOW);
    break;

    case 3:
    digitalWrite(pinmix,LOW);
    digitalWrite(pinverde,LOW);
    digitalWrite(pinrojo,HIGH);
    break;

    default :
    digitalWrite(pinmix,LOW);
    digitalWrite(pinverde,LOW);
    digitalWrite(pinrojo,LOW);
    Serial.println("¡ERROR!,       vuelve a digitar: ");
  } 
}
