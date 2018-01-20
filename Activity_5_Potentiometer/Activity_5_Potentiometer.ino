/*Potentiometer LED Sketch
*/

const int potPin = 0;
const int ledPin = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  digitalWrite(ledPin, HIGH);
  delay(val);
  digitalWrite(ledPin, LOW);
  delay(val);
  
}

