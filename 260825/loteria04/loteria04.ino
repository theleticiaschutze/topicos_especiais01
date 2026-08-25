#include <Wire.h>
#include <LiquidCrystal_I2C.h> //coloca a biblioteca que faz nosso display funcionar 

int bt = 3;  //meu botão
int casa; //qual casa tá sorteando
int numero[6]; 



// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  randomSeed(analogRead(random(0)));
  lcd.begin (16,2); // Inicializa o display LCD 16x2
  lcd.setBacklight(HIGH); // Liga a luz de fundo do LCD
  pinMode(bt, INPUT);
  Serial.begin(9600);
}

void loop() {
  int acao = digitalRead(bt);
  Serial.println(acao);

  lcd.setCursor(0,0);
  lcd.print(" Numeros loteria: ");

  if(acao == 1){
    casa++;
    delay(50);
  }
  
  int sorteio = random(1, 60);
  
  switch(casa){
    case 0:
    lcd.setCursor(0,1);
    lcd.print(sorteio);   
    lcd.setCursor(4,1);
    lcd.print(sorteio); 
    lcd.setCursor(7,1);
    lcd.print(sorteio); 
    lcd.setCursor(10,1);
    lcd.print(sorteio); 
    lcd.setCursor(14,1);
    lcd.print(sorteio); 
    break;
    case 1:
    numero[0] = random(1, 60); 
    lcd.setCursor(0,1);
    lcd.print(numero[0]);   
    lcd.setCursor(4,1);
    lcd.print(sorteio); 
    lcd.setCursor(7,1);
    lcd.print(sorteio); 
    lcd.setCursor(10,1);
    lcd.print(sorteio); 
    lcd.setCursor(14,1);
    lcd.print(sorteio);
    break;
    case 2:
    numero[1] = random(1, 60); 
    lcd.setCursor(0,1);
    lcd.print(numero[0]);   
    lcd.setCursor(4,1);
    lcd.print(numero[1]);  
    lcd.setCursor(7,1);
    lcd.print(sorteio); 
    lcd.setCursor(10,1);
    lcd.print(sorteio); 
    lcd.setCursor(14,1);
    lcd.print(sorteio);
    break;
    case 3:
    numero[2] = random(1, 60); 
    lcd.setCursor(0,1);
    lcd.print(numero[0]);   
    lcd.setCursor(4,1);
    lcd.print(numero[1]);  
    lcd.setCursor(7,1);
    lcd.print(numero[2]);
    lcd.setCursor(10,1);
    lcd.print(sorteio); 
    lcd.setCursor(14,1);
    lcd.print(sorteio);
    break;
    case 4:
    numero[3] = random(1, 60); 
    lcd.setCursor(0,1);
    lcd.print(numero[0]);   
    lcd.setCursor(4,1);
    lcd.print(numero[1]);  
    lcd.setCursor(7,1);
    lcd.print(numero[2]);
    lcd.setCursor(10,1);
    lcd.print(numero[3]); 
    lcd.setCursor(14,1);
    lcd.print(sorteio);
    break;
    case 5:
    numero[4] = random(1, 60); 
    lcd.setCursor(0,1);
    lcd.print(numero[0]);   
    lcd.setCursor(4,1);
    lcd.print(numero[1]);  
    lcd.setCursor(7,1);
    lcd.print(numero[2]);
    lcd.setCursor(10,1);
    lcd.print(numero[3]); 
    lcd.setCursor(14,1);
    lcd.print(numero[4]);
    break;
    default:
    break;
  }

  if (casa>6){
    casa = 0; //reinicia!
    lcd.setCursor(0, 1);
    lcd.print("                "); //tipo "reset" de sumir tudo
  }

  delay(150);
}
