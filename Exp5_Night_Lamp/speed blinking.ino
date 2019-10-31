void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int x;
 int d=analogRead(A0);
  delay(500);
 if(d>900)
	{
		x++;
 	}
		for(int i=x;i<=x;i++)
		{
			digitalWrite(13,HIGH);
			delay(150);
			digitalWrite(13,LOW);
			delay(150);
		}
}