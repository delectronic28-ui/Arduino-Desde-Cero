int pin1 = 3;
int brillo1 = 192;  

int del = 500;

void setup() {
  pinMode(pin1,OUTPUT);

}

void loop() {
  analogWrite(pin1,brillo1);
  delay(del);


}
