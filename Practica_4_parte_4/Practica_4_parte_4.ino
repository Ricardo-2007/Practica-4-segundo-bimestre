/*
 
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB4AM 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Comunicaciónserial y visualizadores
   Dev: Ricardo Andres Rodrpiguez de León-2023100
   Fecha: 19 de abril
*/
 
// Definir los pines para los interruptores
const int pinIncrementar = 2; // Conectar el interruptor de incrementar a este pin
const int pinDecrementar = 3; // Conectar el interruptor de decrementar a este pin

// Definir la variable para almacenar el conteo
int conteo = 0;

void setup() {
  // Configurar los pines de los interruptores como entradas
  pinMode(pinIncrementar, INPUT);
  pinMode(pinDecrementar, INPUT);

  // Inicializar el puerto serial
  Serial.begin(9600);

  // Imprimir el conteo inicial
  Serial.println("Conteo inicial: 0");
}

void loop() {
  // Verificar si el interruptor de incrementar ha sido presionado
  if (digitalRead(pinIncrementar) == HIGH) {
    // Incrementar el conteo
    conteo++;
    // Si el conteo llega a 100, reiniciarlo a 0
    if (conteo >= 100) {
      conteo = 0;
    }
    // Imprimir el nuevo conteo
    Serial.print(" ");
    Serial.println(conteo);
    // Esperar un breve tiempo para evitar múltiples incrementos por un solo toque
    delay(200);
  }

  // Verificar si el interruptor de decrementar ha sido presionado
  if (digitalRead(pinDecrementar) == HIGH) {
    // Decrementar el conteo
    conteo--;
    // Si el conteo llega a -1, establecerlo en 99
    if (conteo < 0) {
      conteo = 99;
    }
    // Imprimir el nuevo conteo
    Serial.print(" ");
    Serial.println(conteo);
    // Esperar un breve tiempo para evitar múltiples decrementos por un solo toque
    delay(200);
  }
}
