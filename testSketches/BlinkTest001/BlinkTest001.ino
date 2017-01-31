template<class T> inline Print &operator <<(Print &obj, T arg) { obj.print(arg); return obj; }
const int MAX_BLINKS = 12;
int blinks = 0;

void blinkOn(int, int);
void blinkOff(int, int);

void setup() {
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH);
  Serial.begin(9600);
  Serial << "***********START blink test***********\n";
}

void loop() {
 if (blinks < MAX_BLINKS) {
  blinkOn(13, 800);
  blinkOff(13, 300);
  blinks++;
  
  Serial << "Blink: " << blinks << '\n';
  if (blinks == MAX_BLINKS) { Serial << "***********END blink test***********"; }
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
