//definindo o led e botão
int led[4] = {9, 10, 11, 12}; 
int botao[4] = {4, 5, 6, 7};

int sequencia[100];
int rodada;



void setup() {
  for(int i=0; i<4; i++){ //coloca leds
    pinMode(led[i], OUTPUT);
  } 
  for(int i=0; i<4; i++){ //coloca botão
    pinMode(botao[i], OUTPUT);
  }
}

void loop() {
  rodada++;
    int ligaum = digitalRead(S1);
    int ligadois = digitalRead(S2);

  }
