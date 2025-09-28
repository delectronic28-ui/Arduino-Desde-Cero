int buzzer = 6;
int pin8 = 8;

void setup() {
  pinMode(buzzer,OUTPUT);
  pinMode(pin8,INPUT_PULLUP);

}

void loop() {
  int boton = digitalRead(pin8);

  if(boton == 0){
    digitalWrite(buzzer,HIGH);
    
  }else{
    digitalWrite(buzzer,LOW);
  }
}
