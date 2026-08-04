//definindo o led
int LED_RED = 12;
int LED_YEL = 8;
int LED_GRE = 4;

void setup() {
  pinMode(LED_RED, OUTPUT); 
  pinMode(LED_YEL, OUTPUT); 
  pinMode(LED_GRE, OUTPUT); 
}

void loop() {
  //liga todos
  digitalWrite (LED_RED, HIGH); //liga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos)
  digitalWrite (LED_YEL, HIGH); //liga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos)
  digitalWrite (LED_GRE, HIGH); //liga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos)
  //desliga todos
  digitalWrite (LED_GRE, LOW); //desliga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos)
  digitalWrite (LED_YEL, LOW); //desliga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos) 
  digitalWrite (LED_RED, LOW); //desliga o LED
  delay (200);  //espera 0,2 segundo (200 milissegundos)
  delay(500); //para separar melhor as sequencias (visivelmente)
}
