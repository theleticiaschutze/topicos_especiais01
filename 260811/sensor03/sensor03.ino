unsigned int sensor;
int led01 = 5; 
int led02 = 8;
int led03 = 12;
int led04 = 13;

void setup() {
  Serial.begin(9600);
  pinMode(led01, OUTPUT);
  pinMode(led02, OUTPUT);
  pinMode(led03, OUTPUT);
  pinMode(led04, OUTPUT);
}

void loop() {
  sensor = analogRead(A5);
  Serial.println(sensor);

  if(sensor<500){
    digitalWrite(led01, HIGH);
  } else{
    digitalWrite(led01, LOW);
  }
  
  if(sensor<300){
    digitalWrite(led02, HIGH);
  } else{
    digitalWrite(led02, LOW);
  }
  
  if(sensor<200){
    digitalWrite(led03, HIGH);
  } else{
    digitalWrite(led03, LOW);
  }
  
  if(sensor<100){
    digitalWrite(led04, HIGH);
  } else{
    digitalWrite(led04, LOW);
  }
  delay(1000);
}
