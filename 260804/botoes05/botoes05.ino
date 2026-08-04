//definindo o led 
int i;
int led[4] = {8, 9, 10, 11};
int S1 = 6;
int S2 = 7;


void setup() {
  for(int i=0; i<4; i++){
    pinMode(led[i], OUTPUT);
  }
  pinMode(S1, INPUT); //coloca botão como entrada
  pinMode(S2, INPUT); 
}

void loop() {
    int ligaum = digitalRead(S1);
    int ligadois = digitalRead(S2);
    if(ligaum == 0){
      for(i = 0; i<4; i++){
        digitalWrite (led[i], HIGH); //liga o LED
        delay (200);  //espera
      }
      for(i = 0; i<4; i++){
        digitalWrite (led[i], LOW); //desliga o LED}
      }
      delay(300);
    }
    if(ligadois==1){
      for(i = 3; i>=0; i--){
        digitalWrite (led[i], HIGH); //liga o LED
        delay (200);  //espera
      }
      for(i = 3; i>=0; i--){
        digitalWrite (led[i], LOW); //desliga o LED}
      }
      delay(300);
    }
  }
