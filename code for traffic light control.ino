// C++ code
//
void setup()
{
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(10, LOW);
  digitalWrite(13, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(8, HIGH);
  delay(6000); // Wait for 6000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(10, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(6000); // Wait for 6000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(13, HIGH);
  digitalWrite(11, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, HIGH);
  delay(6000); // Wait for 6000 millisecond(s)
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(6000); // Wait for 6000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(5, LOW);
  digitalWrite(9, LOW);
}