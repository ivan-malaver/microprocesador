
// Implementación de Función lógica AND con 2 variables
int var1 = 12;   // Pin de entrada del pulsador 1
int var2 = 11;   // Pin de entrada del pulsador 2
int var3 = 10;   // Pin de entrada del pulsador 3
int var4 = 9;   // Pin de entrada del pulsador 4
int led = 13;    // Pin de salida para el LED 
int estado1 = 0; // Para almacenar el estado de la variable1
int estado2 = 0; // Para almacenar el estado de la variable2
int estado3 = 0; // Para almacenar el estado de la variable3
int estado4 = 0; // Para almacenar el estado de la variable4
int resultado = 0; // Para almacenar el resultado

void setup() {
  pinMode(var1, INPUT);     // Inicializa el pin de entrada 1 como entrada
  pinMode(var2, INPUT);     // Inicializa el pin de entrada 2 como entrada
  pinMode(var3, INPUT);     // Inicializa el pin de entrada 3 como entrada
  pinMode(var4, INPUT);     // Inicializa el pin de entrada 4 como entrada

  pinMode(led, OUTPUT);     // Inicializa el pin del LED como salida
}

void loop() {
  estado1 = digitalRead(var1); // Lee el estado del botón y lo almacena
  estado2 = digitalRead(var2); // Lee el estado del botón y lo almacena
  estado3 = digitalRead(var3); // Lee el estado del botón y lo almacena
  estado4 = digitalRead(var4); // Lee el estado del botón y lo almacena

  if (resultado = ((!estado1 || !estado3||estado4)&&(estado2 || estado4)&&(estado2 || estado3) &&(estado1 || estado3)));{
    // I1 i3 i4 +i2 i4 +i2 i3 + i1 13 

  digitalWrite(led, resultado); 
}
 if (resultado = ((!estado1 || !!estado3||estado4)&&(estado3 || !estado4)&&(estado1 || !estado4)&&(estado1 || estado2 || estado3)));{
   // I1 i3 i4 + i3 i4 +i1 i4 + i1 i2 i3 

  digitalWrite(led, resultado); 
}
  if (resultado = ((!estado1 || !estado2||estado3)&&(!estado1 || estado2 || estado4)&&(estado2 || estado3 || estado4) ) &&(estado1 || !estado2 || !estado4) &&(estado1 || !estado3 || !estado4));{
    // I1 I2 I3 + I1 I2 I4 + I2 I3 I4 + I1 I2 I4 + I1 I3 I4  

  digitalWrite(led, resultado);
}
 if (resultado = ((estado3 || estado4)&&( !estado1 || estado2 || estado3)&&(estado1 || !estado2 || !estado4) )&&(estado1 || estado2 || !estado3)); {
   // I3 I4 + I1 I2 I3 + I1 I2 I4 + I1 I2 I3

  digitalWrite(led, resultado);    

}
  
}