unsigned int pwm;
int led = 9; //meu led em que porta

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // entre 0 e 255, quanto maior mais brilha, menor menos brilho
  pwm=0;
  delay(300);
  
  for(pwm=0; pwm<255; pwm++){
    analogWrite(led, pwm);
    delay(20);
  }
}
