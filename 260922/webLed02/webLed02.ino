#include <ESP8266WiFi.h> //biblioteca de wifi
#include <ESP8266WebServer.h>  //biblioteca próprio servidor

/* Configurações do Wifi - SSID & Password */
const char* ssid = "lele";  // SSID
const char* password = "Lele@160405";  //Senha

/* Endereço ip */
IPAddress local_ip(192,168,1,1);
IPAddress gateway(192,168,1,1);
IPAddress subnet(255,255,255,0);

ESP8266WebServer server(80);

uint8_t LED1pin = D6;
bool LED1status = LOW;

void setup() {
  Serial.begin(115200);
  pinMode(LED1pin, OUTPUT);

//Subindo um access point
  WiFi.softAP(ssid, password);
  WiFi.softAPConfig(local_ip, gateway, subnet);
  delay(100);
 

//Conexão em rede wifi existente
//WiFi.begin(ssid, password);
/*
while(WiFi.status() != WL_CONNECTED){
  delay (500);
  Serial.print("...");
}

Serial.println("Wifi conectado!");
Serial.println("Endereço IP: ");
Serial.println(WiFi.localIP());
*/
  /*
  Tratamos aqui a solcicitações HTTP Recebidas
  Por meio do método .on(), que aceita dois parâmetros
  Um sendo a URL e outro a função que será executada quando a 
  URL for acessada.

  Por exemplo ao fazer uma requisição para a raiz do servidor (/)
  A funcação que será executada é a handle_OnConnect()
  **/
  server.on("/", handle_OnConnect);
  server.on("/led1on", handle_led1on);
  server.on("/led1off", handle_led1off);

  //Caso o endereço solicitado não seja encontrado envia o erro 404 (Page Not Found)
  server.onNotFound(handle_NotFound);
  
  server.begin();
  Serial.println("HTTP server iniciado...");
}
void loop() {
  server.handleClient();
  if(LED1status)
  {digitalWrite(LED1pin, HIGH);}
  else
  {digitalWrite(LED1pin, LOW);}
}

void handle_OnConnect() {
  LED1status = LOW;
  Serial.println("GPIO7 Status: OFF | GPIO6 Status: OFF");

  /* Resposta da solicitação da URL contendo 
  código 200 para servidor que indica estar tudo ok
  Tipo do retorno (text/html)
  O retorno SendHTML() // onde devolve um html com os parametros informados
  SendHTML(), função que criamos abaixo para o código html
  */
  server.send(200, "text/html", SendHTML(LED1status)); 
}

void handle_led1on() {
  LED1status = HIGH;
  Serial.println("GPIO7 Status: ON");
  server.send(200, "text/html", SendHTML(true,LED2status)); 
}

void handle_led1off() {
  LED1status = LOW;
  Serial.println("GPIO7 Status: OFF");
  server.send(200, "text/html", SendHTML(false,LED2status)); 
}

void handle_NotFound(){
  server.send(404, "text/plain", "Not found");
}

String SendHTML(uint8_t led1stat,uint8_t led2stat){
  String ptr = "<!DOCTYPE html> <html>\n";
  ptr +="<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=no\">\n";
  ptr +="<title>LED Control</title>\n";
  ptr +="<style>html { font-family: Helvetica; display: inline-block; margin: 0px auto; text-align: center;}\n";
  ptr +="body{margin-top: 50px;} h1 {color: #444444;margin: 50px auto 30px;} h3 {color: #444444;margin-bottom: 50px;}\n";
  ptr +="p {font-size: 14px;color: #888;margin-bottom: 10px;}\n";
  ptr +="</style>\n";
  ptr +="</head>\n";
  ptr +="<body>\n";
  ptr +="<h1>Site da lele</h1>\n";
  ptr +="<h3>cara to medindo a temperatura tá?</h3>\n";
  
   if(led1stat)
  {ptr +="<p>Agora tá tipo ok né</p>\n";}
  else
  {ptr +="<p>Aaaaaai que delicia o verão</p>\n";}

  ptr +="</body>\n";
  ptr +="</html>\n";
  return ptr;
}
