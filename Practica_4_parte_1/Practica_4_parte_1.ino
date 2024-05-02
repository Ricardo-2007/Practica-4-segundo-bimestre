/* 
  Fundación Kinal
    Centro educativo Técncico Laboral Kinal
    Quinto Perito
    Quinto Electrónica 
    Codigo Técnico: EB5AM
    Curso: Taller de Electrónica Digital y reparación de computadoras
    Proyecto:Práctica No.4 Parte I 
    Dev: Ricardo Andres Rodríguez de León-2023100
    Fecha: 26 de Abril
*/

// Definición de pines
  const int interruptor1Pin = 2;
  const int interruptor2Pin = 3;
  const int interruptor3Pin = 4;

// Variables para almacenar el estado de los interruptores y la velocidad del conteo
  bool interruptor1Estado = false;
  bool interruptor2Estado = false;
  bool interruptor3Estado = false;
  int velocidadConteo = 400; // Velocidad inicial en milisegundos

// Variable para almacenar el último tiempo en que se actualizó el conteo
  unsigned long ultimoTiempo = 0;

// Variable para almacenar el valor actual del conteo
  int conteo = 0;
  void setup() {
    
// Inicializar los pines de los interruptores como entrada
  pinMode(interruptor1Pin, INPUT_PULLUP);
  pinMode(interruptor2Pin, INPUT_PULLUP);
  pinMode(interruptor3Pin, INPUT_PULLUP);

// Inicializar la comunicación serial (opcional, para depuración)
  Serial.begin(9600);
}

  void loop() {
// Leer el estado de los interruptores
  interruptor1Estado = digitalRead(interruptor1Pin);
  interruptor2Estado = digitalRead(interruptor2Pin);
  interruptor3Estado = digitalRead(interruptor3Pin);

// Velocidad de conteo de los interruptores
  if (!interruptor1Estado && !interruptor2Estado && !interruptor3Estado) {
    velocidadConteo = 400;
  } else if (!interruptor1Estado) {
    velocidadConteo = 900;
  } else if (!interruptor2Estado) {
    velocidadConteo = 600;
  } else if (!interruptor3Estado) {
    velocidadConteo = 2400;
  }

// Verificar si es tiempo de actualizar el conteo
  unsigned long tiempoActual = millis();
  if (tiempoActual - ultimoTiempo >= velocidadConteo) {
// Actualizar el conteo.
    conteo++;
    if (conteo > 9) {
      conteo = 0;
    }

// Actualizar el último tiempo de actualización.
    ultimoTiempo = tiempoActual;
    
// Imprimir el conteo en el monitor serial (opcional, para depuración)
    Serial.println(conteo);
  }
}
