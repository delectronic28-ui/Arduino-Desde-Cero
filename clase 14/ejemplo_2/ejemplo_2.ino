int mi_edad;
String mensaje1 = "Ingresa Tu Edad";
String mensaje2 = "Tu Edad es: ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(mensaje1);

  // Espera a que haya datos disponibles
  while (Serial.available() == 0) {
    // no hace nada, solo espera
  }

  // Lee el número
  mi_edad = Serial.parseInt();

  // Si el número es 0 y no escribiste realmente un número, vuelve a pedir
  if (mi_edad == 0) {
    Serial.println("Por favor, ingresa un número válido.");
    while (Serial.available() > 0) {
      Serial.read();  // limpia caracteres residuales
    }
    delay(500); // pequeña pausa para evitar saturar el monitor
    return;  // vuelve al inicio de loop() y repite
  }

  // Si el número es válido, lo imprime
  Serial.print(mensaje2);
  Serial.println(mi_edad);

  // Limpia el buffer
  while (Serial.available() > 0) {
    Serial.read();
  }

  
}
