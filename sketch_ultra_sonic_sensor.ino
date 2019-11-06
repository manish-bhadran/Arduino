
const int pingPin = 7;
const int echoPin = 6;

void setup() {
  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  ntimeters:
  long duration, inches, cm;
  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  //Serial.print(duration);
 // inches = microsecondsToInches(duration);
  cm = microsecondsToCentimeters(duration);

  //Serial.print(inches);
  //Serial.print("in, ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  delay(1000);
}

/*long microsecondsToInches(long microseconds) {
  
  return microseconds / 74 / 2;
}*/

long microsecondsToCentimeters(long microseconds) {
  long double d;
  d = 0.343 * microseconds;
  
  return d / 29;
}
