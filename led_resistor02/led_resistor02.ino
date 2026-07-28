//definindo o led
int LED_PIN = 12;

void setup() {
  pinMode(LED_PIN, OUTPUT); //habilita o pino 12 para saida digital (OUTPUT)
}

void loop() {
  digitalWrite (LED_PIN, HIGH); //liga o LED
  delay (1000);  //espera 1 segundo (1000 milissegundos)
  digitalWrite (LED_PIN, LOW); //desliga o LED
  delay (1000);  //espera 1 segundo (1000 milissegundos)
}
