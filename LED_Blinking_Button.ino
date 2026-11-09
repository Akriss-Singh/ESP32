#define LED 2
#define BUTTON 4

void setup() {
  pinMode(LED , OUTPUT);
  pinMode(BUTTON , INPUT_PULLUP);
}

void loop() {
  if (digitalRead(BUTTON) == LOW)
  {
    digitalWrite(LED , HIGH);
    delay(1000);
    digitalWrite(LED , LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(LED , LOW);

  }
 
}
