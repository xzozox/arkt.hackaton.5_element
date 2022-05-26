 void setup() {
  Serial.begin(9600); // Связующий коммутатор
  pinMode(7, OUTPUT);
  
}

void loop() {
digitalWrite(7, HIGH);  
while (Serial.available()==0);
char val = Serial.read();
Serial.write(val);
}
