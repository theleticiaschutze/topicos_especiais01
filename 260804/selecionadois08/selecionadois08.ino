//definindo o led e botão
int led[6] = {8, 9, 10, 11, 12, 13};  //6 botões do 8 ao 13
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
    
    if(ligaum==1 && ligadois==0){
      digitalWrite (led[0], HIGH); 
      digitalWrite (led[1], HIGH);
      digitalWrite (led[2], LOW); 
      digitalWrite (led[3], LOW);
      digitalWrite (led[4], LOW); 
      digitalWrite (led[5], LOW);
    } else if(ligadois==0||ligaum==1){
      digitalWrite (led[2], HIGH); 
      digitalWrite (led[3], HIGH);
      digitalWrite (led[0], LOW); 
      digitalWrite (led[1], LOW);
      digitalWrite (led[4], LOW); 
      digitalWrite (led[5], LOW);
    }
    
    if(ligaum==0 && ligadois==0){
      digitalWrite (led[4], HIGH); 
      digitalWrite (led[5], HIGH);
      digitalWrite (led[0], LOW); 
      digitalWrite (led[1], LOW);
      digitalWrite (led[2], LOW); 
      digitalWrite (led[3], LOW);
    }else{
      digitalWrite (led[0], LOW); 
      digitalWrite (led[1], LOW);
      digitalWrite (led[2], LOW); 
      digitalWrite (led[3], LOW);
      digitalWrite (led[4], LOW); 
      digitalWrite (led[5], LOW);
     }
  }
