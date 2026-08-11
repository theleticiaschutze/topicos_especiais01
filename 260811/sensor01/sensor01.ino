unsigned int sensor;
int led = 10; 

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  sensor = analogRead(A5);
  Serial.println(sensor);

  if(sensor>200){
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
    }
}
