unsigned int sensor; //O tipo unsigned int, armazena numeros de 0 a 65.535, ou seja somente positivos!
unsigned int pwm; //Armazena o valor convertido...
int b1 = 12; //meu botão
int led[3] = {9, 10, 11};
int i=0; 

void setup() {
  for(i = 0; i < 3; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(b1, INPUT); //coloca botão como entrada
  Serial.begin(9600);
  i=0;
}

void loop() {
  sensor = analogRead(A0); // Irá retornar um valor entre 0 e 1023.
  
  int ligado = digitalRead(b1); //faz a leitura do botão
  delay(300);

  pwm = map (sensor, 0, 1023, 0, 255); //Converte o valor para a escala de 0 a 255;

  if(ligado==1){
    led[i];
    i++;
    
    if(i==3){
      i=0;
    }
  }
  
  analogWrite(led[i], pwm);
  
}
