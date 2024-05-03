
 /*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: secuencia de luces LED del tipo “auto-fantastico”
   Dev: Ricardo Andres Rodrpiguez de León-2023100
   Fecha: 3 de Mayo
*/
int pines[] = {4, 5, 6, 7, 8, 9, 10, 11, 12}; 
int time = 0;
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT); 
  for (int p = 0; p < 9; p++) {
    pinMode(pines[p], OUTPUT);}
}

void loop() {

  if(digitalRead(2)==HIGH){
    time = 500;
    Serial.println("Secuencia - Velocidad 1");
    
    for (int p = 0; p<9 ; p++){
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);}
    
    for (int p = 9; p>=0 ; p--){
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);}
  }
  

  if(digitalRead(3)==HIGH){
    time = 1000;
    Serial.println("Secuencia - Velocidad 2");
    
    for (int p = 0; p<9 ; p++){
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);}

    for (int p = 9; p>=0 ; p--){
    digitalWrite(pines[p], HIGH);
    delay(time);
    digitalWrite(pines[p], LOW);
    delay(time);}
  }
  
 }
