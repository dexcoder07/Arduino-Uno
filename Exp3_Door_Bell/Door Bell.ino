void setup()
{
  pinMode(13, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  if(digitalRead(7)==HIGH)
  {
  	digitalWrite(13, HIGH);
  	delay(100); // Wait for 1000 millisecond(s)
  	digitalWrite(13, LOW);
	delay(100); // Wait for 1000 millisecond(s)

  }
}