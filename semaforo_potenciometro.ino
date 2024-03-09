//Variable donde almacenaremos el valor del potenciometro
long valor;
 
//Declaramos los pins de los LEDs
int LED1 = 2;
int LED2 = 3;
int LED3 = 4;

 
void setup() {
  //Inicializamos la comunicación serial
  Serial.begin(9600);
  
  //Escribimos por el monitor serie mensaje de inicio
  Serial.println("Inicio de sketch - valores del potenciometro");
 
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
 
}
 
void loop() {
  // leemos del pin A0 valor
  valor = analogRead(A0);
 
  //Imprimimos por el monitor serie
  Serial.print("El valor es = ");
  Serial.println(valor);
 
  if(valor >= 0 && valor <=255)
  {
    digitalWrite(LED1, HIGH);
	delay(5000);
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(3000);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
   
      
  } 
  
  if (valor >= 256 && valor <=511)
  {
      digitalWrite(LED1, HIGH);
	delay(500);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, HIGH);
    delay(300);
    digitalWrite(LED3, LOW);
    digitalWrite(LED2, HIGH);
    delay(100);
    digitalWrite(LED2, LOW);
   
   
      
  }
 
  if (valor >= 512 && valor <=767)
  {
      digitalWrite(LED1, LOW);
     delay(1000);
   
      digitalWrite(LED2, LOW);
     delay(1000);
      digitalWrite(LED3, HIGH);
     delay(1000);
      
    }
 
  if (valor >= 768 && valor <=1023)
  {
      digitalWrite(LED1, LOW);
     delay(1000);
   
      digitalWrite(LED2, HIGH);
     delay(1000);
    digitalWrite(LED2, LOW);
     delay(1000);
      digitalWrite(LED3, LOW);
     delay(1000);
   
      
   }
}