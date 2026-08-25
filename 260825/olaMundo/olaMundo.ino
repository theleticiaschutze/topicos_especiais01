#include <Wire.h>
#include <LiquidCrystal_I2C.h> //coloca a biblioteca que faz nosso display funcionar 

// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  lcd.begin (16,2); // Inicializa o display LCD 16x2
  lcd.setBacklight(HIGH); // Liga a luz de fundo do LCD

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Ola");
  lcd.setCursor(0,1);
  lcd.print("Mundo");
  delay(1000);
}
