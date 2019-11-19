#include <ESP8266WiFi.h>


const char* ssid = "Aula_AP";
const char* password = "12345678";
WiFiServer server(80);

// Pinos de controle
#define controle1 14  // D5 NODEMCU
#define controle2 12  // D6 NODEMCU
#define controle3 13  // D7 NODEMCU
#define controle4 15  // D8 NODEMCU

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  
  IPAddress staticIP(192, 168, 4, 2); // IP set to Static
  IPAddress gateway(192, 168, 4, 1);// gateway set to Static
  IPAddress subnet(255, 255, 255, 0);// subnet set to Static

  WiFi.mode(WIFI_AP);// Working mode only as Acess Point 

  WiFi.softAP(ssid, password, 2, 0);
  WiFi.config(staticIP, gateway, subnet);

  server.begin();

  Serial.println("Server started"); 
  Serial.println(WiFi.softAPIP());

  // Configurar as portas lógicas
pinMode(controle1, OUTPUT);
pinMode(controle2, OUTPUT);
pinMode(controle3, OUTPUT);
pinMode(controle4, OUTPUT);

// Inicializar em LOW
digitalWrite(controle1, LOW);
digitalWrite(controle2, LOW);
digitalWrite(controle3, LOW);
digitalWrite(controle4, LOW);

}

void loop() {
  
WiFiClient client = server.available();
  
if(client){
  Serial.println("Cliente Detectado");

  
while (!client.available()) {
    delay(1);
  }

 
Serial.println("Cliente disponivel");

   while(client.connected()==1){
    Serial.println("client connected");
  Serial.println( client.connected());

  

   char c = client.read();
    if(c == 'a'){

         digitalWrite(controle1,HIGH);
        digitalWrite(controle2,LOW);
        digitalWrite(controle3,LOW);
        digitalWrite(controle4,LOW);
      
       
      } 

       if(c == 'b'){

          digitalWrite(controle1,LOW);
        digitalWrite(controle2,HIGH);
        digitalWrite(controle3,LOW);
        digitalWrite(controle4,LOW);
        
      } 
  
     if(c == 'c'){

         digitalWrite(controle1,LOW);
        digitalWrite(controle2,LOW);
        digitalWrite(controle3,HIGH);
        digitalWrite(controle4,LOW);
       
      } 

       if(c == 'd'){

          digitalWrite(controle1,LOW);
        digitalWrite(controle2,LOW);
        digitalWrite(controle3,LOW);
        digitalWrite(controle4,HIGH);
       
      } 
    
      }
     client.stop();
     Serial.println("Cliente Desconectado");

}

  }
