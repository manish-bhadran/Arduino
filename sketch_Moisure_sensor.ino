void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
    
}

void loop() {
  // put your main code here, to run repeatedly:
  long int var1 = analogRead(A0);
  var1 =  map(var1, 1023,0,0,100);
  Serial.print(var1);
  Serial.println("%");

}
