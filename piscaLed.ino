/*PISCA-LED 
PORTA 13, VERDE (5s)
PORTA 12, AMARELO (2s)
PORTA 11, VERMELHO (3s)
PORTA GND, PRETO*/

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  
  digitalWrite(13, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(11, LOW);
}
