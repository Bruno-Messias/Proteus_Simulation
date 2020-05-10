# 1 "c:\\Users\\bruno\\OneDrive\\Documentos\\GitHub\\Proteus_Simulation\\Arquivos .ino\\dc_motor.ino"
void setup()
{
  pinMode(6, 0x1);
  pinMode(7, 0x1);
}

void loop()
{

  digitalWrite(7, 0x1);
  digitalWrite(6, 0x0);
  delay(3000);
  digitalWrite(7, 0x0);
  digitalWrite(6, 0x1);
  delay(3000);

}
