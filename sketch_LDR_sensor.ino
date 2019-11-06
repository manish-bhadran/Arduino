int ldr_thrhold = 100;
void setup() {
  // put your setup code here, to run once:
  
  Serial.begin(9600);
 
  pinMode(13, OUTPUT);
 

}

void loop() {
  
  // put your main code here, to run repeatedly:
  int var1 = analogRead(A0);
  
  Serial.println(var1);
  if (var1 <ldr_thrhold)
  {
    digitalWrite(13, HIGH);
   delay(200);
  }
  else
  {
   
    digitalWrite(13, LOW);
   
  }
  

}
