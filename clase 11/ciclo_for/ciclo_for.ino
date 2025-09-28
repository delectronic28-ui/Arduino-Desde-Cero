
int pina0 = A0;
int del = 100;
int pin6 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(pina0, INPUT);
  pinMode(pin6, OUTPUT);
}

void loop() {
  int sensor = analogRead(pina0) / 255;
  Serial.println(sensor);

  switch (sensor) {
    case 0:
      Serial.println(" MUY ALTA LUMINOSIDAD");
      digitalWrite(pin6, LOW);
      break;

    case 1:
      Serial.println(" ALTA LUMINOSIDAD");
      digitalWrite(pin6, LOW);
      break;

    case 2:
      Serial.println("MEDIA LUMINOSIDAD");
      digitalWrite(pin6, LOW);
        break;

    case 3:
      Serial.println(" BAJA LUMINOSIDAD");
      digitalWrite(pin6, HIGH);
      break;

    case 4:
      Serial.println(" MUY BAJA LUMINOSIDAD");
      digitalWrite(pin6, HIGH);
      break;

    default:
      Serial.println(" error");
      break;
  }
  delay(del);
}
