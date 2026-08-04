//define LED_PIN 13
int LED_PIN = 13; /*Aqui criamos uma constante chamada LED_PIN com o 
                  valor 13, o qual indica a pota o arduino que estamos
                  utilizando, se não tem nada conectado na porta 13 e 
                  manda usar ela ele liga e desliga o led L*/

void setup() {
  pinMode(LED_PIN, OUTPUT); //habilita o pino 13 para saida digital (OUTPUT)
}

void loop() {
  digitalWrite (LED_PIN, HIGH); //liga o LED
  delay (1000);  //espera 1 segundo (1000 milissegundos)
  digitalWrite (LED_PIN, LOW); //desliga o LED
  delay (1000);  //espera 1 segundo (1000 milissegundos)
}
