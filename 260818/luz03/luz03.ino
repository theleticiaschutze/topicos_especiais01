unsigned int sensor;
unsigned int pwm; 
int led = 10;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
   sensor = analogRead(A5);
   Serial.println(sensor);
   delay(200);

   pwm = map (sensor, 70, 600, 0, 255);

   analogWrite(led, pwm);
   
  
}
