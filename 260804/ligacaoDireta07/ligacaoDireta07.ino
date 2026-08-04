//definindo o led e botão
int led[4] = {9, 10}; 
int S1 = 7;
int S2 = 6;


void setup() {
  for(int i=0; i<6; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(S1, INPUT); //coloca botão
  pinMode(S2, INPUT);
}

void loop() {
    int ligaum = digitalRead(S1);
    int ligadois = digitalRead(S2);
    
    if(ligaum == 0){
      digitalWrite (led[0], HIGH); //liga o amarelo
      delay (2000);  //espera  
    }  
    if(ligadois==1){
      digitalWrite (led[1], HIGH); //liga o vermelho
      delay (2000);  //espera 
    }
  }
