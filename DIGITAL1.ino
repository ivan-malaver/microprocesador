int boton1=2;
int boton2=3;
int boton3=4;
int boton4=5;
int led=7;
int estadoboton1=0;//variable donde se guarda el estado del botonl
int estadoboton2=0;//variable donde se guarda el estado del boton2
int estadoboton3=0;//variable donde se guarda el estado del boton3
int estadoboton4=0;//variable donde se guarda el estado del boton4
void setup() {
pinMode (boton1, INPUT);//pin 2 como entrada
pinMode (boton2, INPUT);//pin 3 como entrada 
pinMode (boton3, INPUT);//pin 4 como entrada
pinMode (boton4, INPUT);//pin 5 como entrada pinMode(led, OUTPUT); // pin 7 como salida
}
void loop() {
estadoboton1 = digitalRead(boton1);//lectura digital de pin 2
estadoboton2 = digitalRead(boton2);//lectura digital de pin 3
estadoboton3 = digitalRead(boton1);//lectura digital de pin 4
estadoboton2 = digitalRead(boton2);//lectura digital de pin 5
//AND
if (estadoboton1==LOW && estadoboton3==LOW && estadoboton4==HIGH ||estadoboton3==HIGH && estadoboton4==LOW ||estadoboton1==HIGH && estadoboton4==LOW || estadoboton1==HIGH && estadoboton2==HIGH && estadoboton3==HIGH)
{
digitalWrite(led, HIGH);
delay(100);
}
else
{