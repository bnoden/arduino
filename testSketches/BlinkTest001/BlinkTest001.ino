template<class T> inline Print &operator <<(Print &obj, T arg) { obj.print(arg); return obj; }
const int MAX_BLINKS = 12;
int blinks = 0;

void blinkOn(int, int);
void blinkOff(int, int);

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 if (blinks < MAX_BLINKS) {
  blinkOn(13, 800);
  blinkOff(13, 300);
  blinks++;
  Serial << "Blink: " << blinks << '\n';
 }
}

void blinkOn(int led, int millisec) {
  digitalWrite(led, HIGH);
  delay(millisec);
  }
void blinkOff(int led, int millisec) {
  digitalWrite(led, LOW);
  delay(millisec);
  }
