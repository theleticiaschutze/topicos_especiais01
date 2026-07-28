//definindo o led e index
int i = 0;
int LED_PIN = 12;

void setup() {
  pinMode(LED_PIN, OUTPUT); //habilita o pino 12 para saida digital (OUTPUT)
}

void loop() {
  for(i = 0; i<3; i++){
    digitalWrite (LED_PIN, HIGH); //liga o LED
    delay (1000);  //espera 1 segundo (1000 milissegundos)
    digitalWrite (LED_PIN, LOW); //desliga o LED
    delay (3000);  //espera 3 segundo (3000 milissegundos)
    }
  //aí pisca 5 vezes
  for(i=0; i<5; i++){
    digitalWrite (LED_PIN, HIGH); //liga o LED
    delay (200);  //espera 0,2 segundo (200 milissegundos)
    digitalWrite (LED_PIN, LOW); //desliga o LED
    delay (200);  //espera 0,2 segundo (200 milissegundos)
  }
  delay(1000); //para separar melhor as sequencias (visivelmente)
}
