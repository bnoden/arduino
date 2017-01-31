template<class T> inline Print &operator <<(Print &obj, T arg) { obj.print(arg); return obj; }

int sensorPin = 0;
                      
int ledPin = 13;


void setup() {

  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

}


void loop() {
  int sensorValue;

  sensorValue = analogRead(sensorPin);

  digitalWrite(ledPin, HIGH);

  delay(sensorValue);
  
  digitalWrite(ledPin, LOW);

  delay(sensorValue);

  Serial << sensorValue << '\n';
}

