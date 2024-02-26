void setup() {
  // put your setup code here, to run once:
   pinMode(D8,OUTPUT);
   pinMode(D7,OUTPUT);
   pinMode(D6,OUTPUT);
   pinMode(D1,INPUT);
   pinMode(D2,INPUT);
   pinMode(D3,INPUT);
   pinMode(D5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D8,HIGH);
      delay(500);
   digitalWrite(D8,LOW);
      delay(500);

 digitalWrite(D7,HIGH);
      delay(500);
   digitalWrite(D7,LOW);
      delay(500);


 digitalWrite(D6,HIGH);
      delay(500);
   digitalWrite(D6,LOW);
      delay(500);

 digitalWrite(D1,HIGH);
      delay(500);
   digitalWrite(D1,LOW);
      delay(500);

  digitalWrite(D2,HIGH);
      delay(500);
   digitalWrite(D2,LOW);
      delay(500);

   digitalWrite(D3,HIGH);
      delay(500);
   digitalWrite(D3,LOW);
      delay(500);

   digitalWrite(D5,HIGH);
      delay(500);
   digitalWrite(D5,LOW);
      delay(500);
  }
