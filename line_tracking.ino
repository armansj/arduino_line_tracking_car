int sensorPin = 2;    
int motorIn1 = 9;       
int motorIn2 = 10;     
int motorENA = 11;     

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(motorIn1, OUTPUT);
  pinMode(motorIn2, OUTPUT);
  pinMode(motorENA, OUTPUT);
  Serial.begin(9600);

  analogWrite(motorENA, 255);

void loop() {
  int sensorValue = digitalRead(sensorPin);

  if (sensorValue == LOW) {
    digitalWrite(motorIn1, HIGH);
    digitalWrite(motorIn2, LOW);
    analogWrite(motorENA, 200); 
  } else {
    digitalWrite(motorIn1, LOW);
    digitalWrite(motorIn2, LOW);
    analogWrite(motorENA, 0); 
  }
}
