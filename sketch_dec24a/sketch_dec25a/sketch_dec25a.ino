int ledPin = 11;
long previousMillis = 0;
long interval = 100;
bool z=false;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  // open the serial port at 9600 bps:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // using millis() instead of delay
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis > interval) {
    // save the last time you checked the sensor  
    previousMillis = currentMillis; 
    z=!z;
    if (z) {
      digitalWrite(ledPin, HIGH);
      Serial.println("HIGH");  
    }
    else {
      digitalWrite(ledPin, LOW);
      Serial.println("LOW"); 
    }
  }            
}

