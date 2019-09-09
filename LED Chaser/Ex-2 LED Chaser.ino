void setup()
{
  for(int i=8;i<=11;i++)
  {
  pinMode(i, OUTPUT);
}
}

void loop()
{
  for(int i=8;i<=11;i++)
  {
    digitalWrite(i,HIGH);
    digitalWrite(i+1,HIGH);
    delay(600);
    digitalWrite(i,LOW);
    digitalWrite(i+1,LOW);
    delay(600);
  }
}