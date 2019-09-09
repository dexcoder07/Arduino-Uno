void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(1200); // Wait for 1200 millisecond(s)
  digitalWrite(9, LOW);
  delay(1200); // Wait for 1200 millisecond(s)
}