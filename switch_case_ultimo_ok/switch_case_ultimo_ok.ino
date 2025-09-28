int pina0 = A0;
int pin6 = 6;
int brillo;
int del = 100;

void setup() {
  Serial.begin(9600);
  pinMode(pina0, INPUT);
  pinMode(pin6,OUTPUT);
}

void loop() {
  brillo = analogRead(pina0) / 255;
  Serial.println(brillo);

  switch (brillo) {
    case 0:
      Serial.println("Max. alimunacion");
      digitalWrite(pin6, LOW);
      break;

    case 1:
      Serial.println("alta iluminacion");
      digitalWrite(pin6, LOW);
      break;

    case 2:
      Serial.println("media iluminacion");
      digitalWrite(pin6, LOW);
      break;

    case 3:
      Serial.println("baja iluminacion");
      digitalWrite(pin6, HIGH);
      break;

    case 4:
      Serial.println("muy baja iluminacion");
      digitalWrite(pin6, HIGH);
      break;

    default:
      Serial.println(" error");
      break;
  }

  delay(del);
}
