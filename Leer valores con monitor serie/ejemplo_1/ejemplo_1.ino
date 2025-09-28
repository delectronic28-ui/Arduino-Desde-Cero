long mi_edad;
String mensaje1 = "Ingresa Tu Edad: ";
String mensaje2 = "Tu Edad es: ";
void setup() {
  Serial.begin(9600);
  
}

void loop() {
  Serial.println(mensaje1);
  while (Serial.available() == 0) {
  
  }

  mi_edad = Serial.parseInt();
  Serial.read();
  Serial.print(mensaje2);
  Serial.println(mi_edad);
}
