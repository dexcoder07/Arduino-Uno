void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 int d=analogRead(A0);
  delay(500);
  if(d<300)
  {
    digitalWrite(13,HIGH);
    delay(1000);
  }
  else
    digitalWrite(13,LOW);
  	delay(1000);
}
