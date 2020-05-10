void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{

  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  delay(3000);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(3000);
  
}