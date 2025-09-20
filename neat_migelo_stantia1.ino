// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  }

void loop()
{
  digitalWrite(5, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(5, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) Desligado
  
  digitalWrite(6, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(6, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) Desligado
  
  digitalWrite(9, HIGH);
  delay(1000); // Aguarde 1000 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(1000); // Aguarde 1000 millisecond(s) Desligado
  
}