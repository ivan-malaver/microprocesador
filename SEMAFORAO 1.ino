// C++ code
//
void setup() {
  
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(4,LOW);
 
}

void loop() {

	if (digitalRead(9)==1){
  
digitalWrite(7,LOW);
delay(1000);
digitalWrite(7,HIGH);
delay(1000);
  }
  if (digitalRead(9)==0){
  
digitalWrite(8,HIGH);
delay(5000);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(8,LOW);
delay(4000);
digitalWrite(7,LOW);
delay(1000);
digitalWrite(4,HIGH);
delay(5000);
digitalWrite(7,HIGH);
delay(1000);
digitalWrite(4,LOW);
delay(4000);
digitalWrite(7,LOW);
delay(1000);
  }
   }
 
  
