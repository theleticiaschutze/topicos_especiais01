#include <Wire.h>
#include <LiquidCrystal_I2C.h> //coloca a biblioteca que faz nosso display funcionar 

// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  lcd.begin (16,2); // Inicializa o display LCD 16x2
  lcd.setBacklight(HIGH); // Liga a luz de fundo do LCD
}

void loop() {
  int i = 0, j = 200;
  
  for(i=0; i<200; i++){
    lcd.setCursor(0,0);
    lcd.print(i);
    if(j>100){
      lcd.setCursor(13,1);
      lcd.print(j);
    } else if(j>10){
      lcd.setCursor(13,1);
      lcd.print(" ");
      lcd.setCursor(14,1);
      lcd.print(j);
    } else{
      lcd.setCursor(14,1);
      lcd.print(" ");
      lcd.setCursor(15,1);
      lcd.print(j);
    }
    j--;
    delay(100);
  }
  lcd.clear();  //esse limpa a tela toda
}
