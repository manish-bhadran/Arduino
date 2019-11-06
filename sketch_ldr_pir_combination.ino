int ldr_thrhold = 100;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  int lr = analogRead(A4);
  int pir = digitalRead(8);
  Serial.println(lr);
  Serial.println(pir);

  if((pir == 1) || (lr < ldr_thrhold))
  {
    digitalWrite(13, HIGH);
    delay(200);
  }
  else
  {
    digitalWrite(13, LOW);
    delay(200);
  }
 

}
