//definindo o led 
int led[8] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  for(int i=0; i<8; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  int j =8;
  for(int i=0; i<4; i++){
    j--;
    digitalWrite (led[i], HIGH); //liga o LED
    digitalWrite (led[j], HIGH); //liga o LED 
    delay(100);
  }
  j =4;
  for(int i=0; i<4; i++){
    digitalWrite (led[i], LOW); //desliga o LED
    digitalWrite (led[j], LOW); //desliga o LED 
    j++;
    delay(100);
  }
}
