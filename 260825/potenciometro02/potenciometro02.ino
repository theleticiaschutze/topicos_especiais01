#include <Wire.h>
#include <LiquidCrystal_I2C.h> //coloca a biblioteca que faz nosso display funcionar 

unsigned int sensor; //o valor que vem
unsigned int pwm; //coloca o valor convertido


// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  lcd.begin (16,2); // Inicializa o display LCD 16x2
  lcd.setBacklight(HIGH); // Liga a luz de fundo do LCD
  Serial.begin(9600);
}

void loop() {
  sensor = analogRead(A3);
  Serial.println(sensor);
  
  pwm = map(sensor, 0, 1023, 0, 255);
  
  lcd.setCursor(0,0);
  lcd.print(sensor);
  lcd.setCursor(0,1);
  lcd.print(pwm);

  delay(100);
  lcd.clear();
}
