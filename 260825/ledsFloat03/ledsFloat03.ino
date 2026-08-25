#include <Wire.h>
#include <LiquidCrystal_I2C.h> //coloca a biblioteca que faz nosso display funcionar 

unsigned int sensor; //o valor que vem
unsigned int pwm; //coloca o valor convertido
int red = 6;
int yel = 5;


// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);

void setup() {
  lcd.begin (16,2); // Inicializa o display LCD 16x2
  lcd.setBacklight(HIGH); // Liga a luz de fundo do LCD
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(yel, OUTPUT);
}

void loop() {
  sensor = analogRead(A3);
  Serial.println(sensor);

 
  
  pwm = map(sensor, 0, 1023, 0, 500);
  
  float fpwm = pwm / 100.0;  //o 100.0 divide por um float tbm, e declarar assim faz ele ter .xx no numero do pwm!
  
  lcd.setCursor(0,0);
  lcd.print("Voltagem:");
  lcd.setCursor(0,1);
  lcd.print(fpwm); 
  lcd.setCursor(5,1);
  lcd.print(" V");

  if(pwm > 2){
    digitalWrite(yel, HIGH);
  } else{
    digitalWrite(yel, LOW);
  }
  if(pwm > 3){
    digitalWrite(red, HIGH);
  } else{
    digitalWrite(red, LOW);
  }

  delay(100);
  lcd.clear();
}
