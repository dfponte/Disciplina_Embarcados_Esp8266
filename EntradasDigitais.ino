

const byte LED = D1; //pino que do LED 
const byte BT =  D2; //pino que do Botão

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BT, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(BT)== LOW){
    digitalWrite(LED,HIGH);  //liga o LED
  }
  else{
    digitalWrite(LED,LOW);  //apaga o LED
  }
}
