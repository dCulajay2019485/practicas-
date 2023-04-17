/*
 Fundacion Kinal
 Electronica
Grado: Quito perito
seccion: A
curso: taller de electronica
Nombre: Diego Alejandro Culajay Gonzalez
carnet: 2019485
*/
#define botonA 5
#define botonB 6
#define red 2
#define green 3
#define blue 4

void setup() {
  
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
}
void loop() {
  digitalWrite(green,LOW);
  digitalWrite(blue,LOW);
  digitalWrite(red,HIGH);
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  delay(500);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  delay(500);  
    
  while(digitalRead(botonA) == HIGH && digitalRead(botonB) == LOW) //primer pulsador precionado(botonA)
  {
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
  }
  while(digitalRead(botonA) == LOW && digitalRead(botonB) == HIGH) //segundo pulsador precionado(botonB)
  {
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,LOW);
  }
  while(digitalRead(botonA) == HIGH && digitalRead(botonB) == HIGH) // ambos precionados
  {
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
  digitalWrite(blue,HIGH);
  }
}
