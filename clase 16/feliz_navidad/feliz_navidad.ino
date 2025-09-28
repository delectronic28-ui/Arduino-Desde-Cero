int buzzer = 8;
int pulsador = 7;

// Notas necesarias
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G4  392

// Melodía: "Feliz Navidad, próspero año y felicidad"
int melodia[] = {
  NOTE_G4, NOTE_C5, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_A4,
  NOTE_A4, NOTE_D5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_B4,
  NOTE_B4, NOTE_E5, NOTE_E5, NOTE_F5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_C5,
  NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_G4
};

// Duraciones (4 = negra, 8 = corchea, 2 = blanca)
int nota_Duracion[] = {
  4, 8, 8, 4, 4, 4, 4, 8, 8,
  4, 8, 8, 4, 4, 4, 4, 8, 8,
  4, 8, 8, 4, 4, 4, 4, 4,
  4, 8, 8, 4, 4, 2
};

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(pulsador,INPUT_PULLUP);
}

void loop() {
  // Cantidad de notas en la melodía (32 en total)
  int boton = digitalRead(pulsador);

  if(boton == 0){

  for (int i = 0; i < 32; i++) {
    int note = melodia[i];
    int duracion = 1000 / nota_Duracion[i];
    if (note > 0) {
      tone(buzzer, note, duracion);
    }
    int pausa = duracion * 1.3;
    delay(pausa);
    noTone(buzzer);
  }
  }

  
}
