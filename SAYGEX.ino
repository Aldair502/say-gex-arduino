const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(100);
  digitalWrite(ledPin, LOW);
  delay(100);
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(300);
  digitalWrite(ledPin, LOW);
  delay(100);
}

void loop() {
  // S
  dot();
  dot();
  dot();
  
  delay(200); // Espacio entre letras
  
  // A
  dot();
  dash();
  
  delay(200); // Espacio entre letras
  
  // Y
  dash();
  dot();
  dash();
  dash();
  
  delay(200); // Espacio entre letras
  
  // Espacio entre palabras
  delay(600);
  
  // G
  dash();
  dash();
  dot();
  
  delay(200); // Espacio entre letras
  
  // E
  dot();
  
  delay(200); // Espacio entre letras
  
  // X
  dash();
  dot();
  dot();
  dash();
  
  delay(5E3); // Espacio entre palabras
}