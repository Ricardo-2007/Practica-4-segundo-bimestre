/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Display, auto-fantastico
   Dev: Ricardo Andres Rodrpiguez de León-2023100
   Fecha: 26 de abril
*/
int pin;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  for(pin=6;pin <= 12;pin++){
   pinMode(pin,OUTPUT); 
  } 
}

void loop()
{
 if(digitalRead(A0)==HIGH)
  {
    Serial.println("Practica No.4 Ricardo Rodriguez");
    delay(500);
  }
  
 if(digitalRead(A1)==HIGH){ 
  for(pin=6;pin <= 12;pin++)
    {
    pinMode(pin, OUTPUT);
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    }
  
    for(pin=12;pin >= 6;pin--)
    {
    pinMode(pin, OUTPUT);
    digitalWrite(pin,HIGH);
    delay(500);
    digitalWrite(pin,LOW);
    }
   
  }
  if(digitalRead(A2)==HIGH)//Boton 3
  {
   digitalWrite(6,HIGH);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);   //C
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);   //U
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, LOW);    //A
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   delay(2000);
   digitalWrite(6,LOW);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);   //T
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, LOW);
   digitalWrite(8, LOW);
   digitalWrite(9, LOW);    //R
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
   digitalWrite(6,HIGH);
   digitalWrite(7, HIGH);
   digitalWrite(8, HIGH);
   digitalWrite(9, HIGH);   //O
   digitalWrite(10, HIGH);
   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   delay(2000);
  }
 
  //Boton 4
  if((digitalRead(A1)==HIGH && digitalRead(A3)==HIGH)||(digitalRead(3)==HIGH && digitalRead(5)==HIGH))
  {
   Serial.println("Gracias por su atencion");
   delay(500);
  }
  
}
    
