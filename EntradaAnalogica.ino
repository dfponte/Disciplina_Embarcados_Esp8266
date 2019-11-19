
// variável para armazenamento do valor digital da tensão no potenciômetro
int potValue = 0;

 void setup() {
  Serial.begin(9600);  //inicia a comunicação serial
}

void loop() {

   // Reading potentiometer value
  potValue = analogRead(A0);  
  Serial.println(potValue);  //imprime o valor da conversão AD no pino A0
  delay(500);                      //aguarda 500 ms
}
