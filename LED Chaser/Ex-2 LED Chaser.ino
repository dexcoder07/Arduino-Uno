void setup()
{
int i;
for(i=2;i<=8;i++)
pinMode(i,OUTPUT);
}

void loop()
{
int a;
for(a=2;a<=8;a=a+2)
{
if(a==8)
{
digitalWrite(2,HIGH);
}
else
{
digitalWrite(2,LOW);
}
digitalWrite(a,HIGH);
digitalWrite(a+2,HIGH);
delay(500);
digitalWrite(a,LOW);
digitalWrite(a+2,LOW);
}
}