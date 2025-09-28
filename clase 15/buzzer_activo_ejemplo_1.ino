int buzzer = 7;
int del = 100;
int del2 = 2000;
int i;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {  // empieza desde cero y da 5 pitidos
    Serial.println(i);
    digitalWrite(buzzer, HIGH);
    delay(del);
    digitalWrite(buzzer, LOW);
    delay(del);
  }
  delay(del2);
}
