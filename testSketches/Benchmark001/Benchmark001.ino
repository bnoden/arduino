const int ledPin = 13;
const int delayPeriod = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int i = 0;
  if (i < 20) { flash(); }
  delay(3000);
  ++i;
}

void flash() {
   digitalWrite(ledPin, HIGH);
   delay(delayPeriod);
   digitalWrite(ledPin, LOW);
   delay(delayPeriod);
}
