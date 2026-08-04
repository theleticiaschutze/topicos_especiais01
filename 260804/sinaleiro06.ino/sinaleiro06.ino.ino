//definindo o led 
int i;
int led[4] = {9, 10, 11};  //o 9 é verde, o 10 amarelo e 11 vermelho
int S1 = 7;


void setup() {
  for(int i=0; i<3; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(S1, INPUT); //coloca botão como entrada - esta ligado ao negativo
}

void loop() {
    int liga = digitalRead(S1);
    
    digitalWrite (led[0], HIGH); //liga o verde  
    digitalWrite (led[1], LOW);
    digitalWrite (led[2], LOW);
    delay (300);  //espera 0,2 segundo (200 milissegundos)
    
    if(liga == 1){
      digitalWrite (led[0], LOW); //desliga o verde
      digitalWrite (led[1], HIGH); //liga o amarelo
      delay (2000);  //espera 
      digitalWrite (led[1], LOW); //desliga o amarelo
      digitalWrite (led[2], HIGH); //liga o vermelho
      delay (3000);  //espera 
      digitalWrite (led[2], LOW); //desliga o vermelho
      delay (100);  //espera  
    }  
  }
