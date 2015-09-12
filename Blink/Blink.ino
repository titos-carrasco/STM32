/*
  Clásico ejemplo de apagar/encender un led
  
  Este código de ejemplo es de dominio público
  This example code is in the public domain.
 */
 
#define LED     PA1

void setup() {
  // inicializa el pin del led como salida.
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);              // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(100);              // wait for a second
}
