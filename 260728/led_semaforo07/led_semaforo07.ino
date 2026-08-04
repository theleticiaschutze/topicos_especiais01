//definindo o led
int r1_gre = 2;
int r1_yel = 3;
int r1_red = 4;
int r2_gre = 5;
int r2_yel = 6;
int r2_red = 7;
int r3_gre = 8;
int r3_yel = 9;
int r3_red = 10;

void setup() {
  pinMode(r1_gre, OUTPUT);
  pinMode(r1_yel, OUTPUT); 
  pinMode(r1_red, OUTPUT);
  pinMode(r2_gre, OUTPUT);
  pinMode(r2_yel, OUTPUT); 
  pinMode(r2_red, OUTPUT);
  pinMode(r3_gre, OUTPUT);
  pinMode(r3_yel, OUTPUT); 
  pinMode(r3_red, OUTPUT);
}

void loop() {
  //rua 01
  digitalWrite(r1_gre, HIGH);
  digitalWrite(r1_yel, LOW);
  digitalWrite(r1_red, LOW);
  digitalWrite(r2_gre, LOW);
  digitalWrite(r2_yel, LOW);
  digitalWrite(r2_red, HIGH);
  digitalWrite(r3_gre, LOW);
  digitalWrite(r3_yel, LOW);
  digitalWrite(r3_red, HIGH);
  delay(3000);
  
  //transição
  digitalWrite(r1_gre, LOW);
  digitalWrite(r1_yel, HIGH);
  delay(1000);
  
  //rua 02 
  digitalWrite(r1_yel, LOW);
  digitalWrite(r1_red, HIGH);
  digitalWrite(r2_red, HIGH);
  digitalWrite(r2_gre, LOW);
  delay(3000);
  
  //transição
  digitalWrite(r2_gre, LOW);
  digitalWrite(r2_yel, HIGH);
  delay(1000);
  
  //rua 03
  digitalWrite(r2_yel, LOW);
  digitalWrite(r2_red, HIGH);
  digitalWrite(r3_red, LOW);
  digitalWrite(r3_gre, HIGH);
  delay(3000);
}
