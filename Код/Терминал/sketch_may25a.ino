 void setup() {
  Serial.begin(9600); // Терминал
  pinMode(13, OUTPUT);

}

void loop() {
  
while (Serial.available()==0);
int val = Serial.read();

if (val == 0) 
{
  Serial.println("Led is On");
  digitalWrite(13, HIGH);
}
else if (val == 1)
{
  Serial.println("Led is Off");
  digitalWrite(13, LOW);
}
}
