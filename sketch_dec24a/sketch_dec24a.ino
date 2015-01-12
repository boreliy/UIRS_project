int ledPin = 11;
int buttonApin = 7;
 
void setup() 
{
  pinMode(ledPin, OUTPUT); 
}
 
void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("HIGH");
  }
  if (digitalRead(buttonApin) == HIGH)
  {
    digitalWrite(ledPin, LOW);
    Serial.println("LOW");
  }
}





