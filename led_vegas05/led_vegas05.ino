//definindo o led 

int led[8] = {13, 6, 5, 3, 2, 4, 8, 11};

void setup() {
  for(int i=0; i<=8; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<9; i++){
    digitalWrite (led[i], HIGH); //liga o LED
    delay (100);  
    digitalWrite (led[i], LOW); //desliga o LED
    delay (5);  
  }
}
