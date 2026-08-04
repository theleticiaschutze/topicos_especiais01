//definindo o led
int LED_RED = 2;
int LED_YEL = 3;
int LED_GRE = 4;

void setup() {
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YEL, OUTPUT); 
  pinMode(LED_GRE, OUTPUT);
}

void loop() {
    
  digitalWrite (LED_GRE, HIGH); 
  delay (3000); 
  digitalWrite (LED_GRE, LOW); 
  digitalWrite (LED_YEL, HIGH); 
  delay (1000);
  digitalWrite (LED_YEL, LOW); 
  digitalWrite (LED_RED, HIGH); 
  delay (3000);  
  digitalWrite (LED_RED, LOW); 
