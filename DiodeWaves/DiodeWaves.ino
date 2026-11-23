int delay_ = 100;

void setup() {
  for (int i = 2; i <= 6; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 2; i <= 6; i++)
  {
    digitalWrite(i, HIGH);
    delay(delay_);
    digitalWrite(i, LOW);
  }

  for (int i = 6; i >= 3; i--)
  {
    digitalWrite(i, HIGH);
    delay(delay_);
    digitalWrite(i, LOW);
  }

}
