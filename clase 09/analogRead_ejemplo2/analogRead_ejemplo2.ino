int pin_a0 = A0;
int pin_a1 = A1;
float vr;
float vf;

int del = 1000;

void setup() {
  pinMode(pin_a0,INPUT);
  pinMode(pin_a1,INPUT);
  Serial.begin(9600); // inicializar el monitor serie

}

void loop() {
  /*vr = (5.*analogRead(pin_a0))/1023.;
  Serial.print("    vr = ");
  Serial.println(vr);
  delay(del);

  vr = (5.*analogRead(pin_a1))/1023.;
  Serial.print("    vf = ");
  Serial.println(vf);
  delay(del);*/
  float vtotal = vr + vf;

  vr = (5.*analogRead(pin_a0))/1023.;
  vr = (5.*analogRead(pin_a1))/1023.;
  Serial.print("vr es  ");
  Serial.print(vr );
  Serial.print(" + ");
  Serial.print("vf es  ");
  Serial.print( vf);
  Serial.print("=");
  Serial.println( vtotal);
  delay(del);





}
