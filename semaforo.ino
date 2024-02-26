                                
void setup () {
pinMode(5,OUTPUT);  
pinMode(6,OUTPUT);   
pinMode(7,OUTPUT);  
 pinMode(8, INPUT);   
 pinMode(9, INPUT);   
}
void loop() { 
    if(digitalRead(9)==LOW){
digitalWrite(5, HIGH);
delay(5000);
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(3000);
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(6, LOW);
    }

     if(digitalRead(9)==HIGH){
      digitalWrite(5, LOW);    // off
          digitalWrite(6, HIGH);   //open
          delay(1000);
          digitalWrite(6, LOW);
          delay(1000);          //off
      digitalWrite(7, LOW);
}
 
}
