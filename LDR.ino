int ldr = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  ldr = analogRead(A0);
  Serial.println(ldr);
  if (ldr < 600) {
    digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
      digitalWrite(11, HIGH);
  } else if (ldr < 900){
    digitalWrite(11, LOW);
  }else 
     digitalWrite(12, LOW);
  delay(10); // Delay a little bit to improve simulation performance
}