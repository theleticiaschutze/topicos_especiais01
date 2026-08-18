unsigned int sensor; //O tipo unsigned int, armazena numeros de 0 a 65.535, ou seja somente positivos!
unsigned int pwm; //Armazena o valor convertido...
int led = 3;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A0); // Ir´a retornar um valor entre 0 e 1023.
  Serial.println(sensor);
  
  pwm = map (sensor, 0, 1023, 0, 255); //Converte o valor para a escala de 0 a 255;
  
  analogWrite(led, pwm);
}
