int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  attachInterrupt(0, stuffHappened, FALLING);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void stuffHappened() {
  digitalWrite(ledPin, HIGH);
}

