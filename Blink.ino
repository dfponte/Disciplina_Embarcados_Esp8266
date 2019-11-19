

const byte LED1 = 2; //pino que o LED do módulo ESP12E está ligado
const byte LED2 = 12;
const byte LED3 = 13;
const byte LED4 = 15;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);

}

void loop() {
 
     digitalWrite(LED1,LOW);  //liga o LED
  delay(1000);            //espera 1 segundo
  digitalWrite(LED1,HIGH); //apaga o LED
  delay(1000);            //espera 1 segundo

  digitalWrite(LED1,LOW);  //liga o LED
  delay(1000);            //espera 1 segundo
  digitalWrite(LED2,HIGH); //apaga o LED
  delay(1000); 
   
 digitalWrite(LED2,LOW);  //liga o LED
  delay(1000);            //espera 1 segundo
  digitalWrite(LED3,HIGH); //apaga o LED
  delay(1000);  
  
 digitalWrite(LED3,LOW);  //liga o LED
  delay(1000);            //espera 1 segundo
  digitalWrite(LED4,HIGH); //apaga o LED
  delay(1000);  
 digitalWrite(LED4,LOW); //apaga o LED
  delay(1000); 
}
