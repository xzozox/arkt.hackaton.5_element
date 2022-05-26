  void setup() {
  Serial.begin(9600); // Конечный коммутатор
  pinMode(8, INPUT);

}

void loop() {
//while (digitalRead(8)==0)         // while (Serial.available()==0);
//int val = digitalRead(8) - '0';   // int val = Serial.read() - '0';

if (digitalRead(8)==0) 
{
  Serial.println(1, DEC);
}
else if (digitalRead(8)==1)
{
  Serial.println(0, DEC);
}
}
