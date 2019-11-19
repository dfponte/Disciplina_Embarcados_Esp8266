

const byte LED = D1; //pino que do LED 


void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED,analogRead(A0)); 
}
