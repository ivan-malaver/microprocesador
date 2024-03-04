bool estado1,estado2, estado3, estado4, ledA, ledB,ledC,ledD;



void setup() {

  

  pinMode(8, INPUT);     // Inicializa el pin de entrada 1 como entrada
  pinMode(7, INPUT);     // Inicializa el pin de entrada 2 como entrada
  pinMode(6, INPUT);     // Inicializa el pin de entrada 3 como entrada
  pinMode(5, INPUT);     // Inicializa el pin de entrada 4 como entrada

  pinMode(1, OUTPUT);     // Inicializa el pin del LED como salida
  pinMode(2, OUTPUT);     // Inicializa el pin del LED como salida
  pinMode(3, OUTPUT);     // Inicializa el pin del LED como salida
  pinMode(4, OUTPUT);     // Inicializa el pin del LED como salida
}

void loop() {
  estado1 = digitalRead(8); // Lee el estado del botón y lo almacena
  estado2 = digitalRead(7); // Lee el estado del botón y lo almacena
  estado3 = digitalRead(6); // Lee el estado del botón y lo almacena
  estado4 = digitalRead(5); // Lee el estado del botón y lo almacena
  delay(20);

ledA = ((!estado1 && !estado3 && estado4)||(estado2 && estado4)||(estado2 && estado3)||(estado1 && estado3));
    // I1 i3 i4 +i2 i4 +i2 i3 + i1 13 
   
  
 ledB = ((!estado1 && !estado3 && estado4)||(estado3 && !estado4)||(estado1 && !estado4)||(estado1 && estado2 && estado3));
   // I1 i3 i4 + i3 i4 +i1 i4 + i1 i2 i3 
   
    
ledC = ((!estado1 && !estado2 && estado3)||(!estado1 && estado2 && estado4)||(estado2 && estado3 && estado4) || (estado1 && !estado2 && !estado4) || (estado1 && !estado3 && !estado4));
    // I1 I2 I3 + I1 I2 I4 + I2 I3 I4 + I1 I2 I4 + I1 I3 I4  
    
    
ledD = ((estado3 && estado4)||( !estado1 && estado2 && estado3)||(estado1 && !estado2 && !estado4) ||(estado1 && estado2 && !estado3));
   // I3 I4 + I1 I2 I3 + I1 I2 I4 + I1 I2 I3
    
    
    
digitalWrite(1,ledA);
digitalWrite(2,ledB);
digitalWrite(3,ledC);
digitalWrite(4,ledD);
 delay(20);
 

}
