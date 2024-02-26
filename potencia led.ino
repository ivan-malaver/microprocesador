int Pot = 0; 
int led = 3; 

int valor; 

void setup(){
  pinMode(led,OUTPUT); 
  }

void loop(){
  valor = analogRead(Pot)/4; 
                            
  analogWrite(led,valor);   
  }  
