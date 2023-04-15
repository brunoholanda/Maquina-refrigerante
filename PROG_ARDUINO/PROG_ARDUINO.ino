// CODIGO EM CC Criado POR NERDKINGTEAM
// VISITE: nerdking.net.br
// youtube.com/nerdkingteam
// Criador, Bruno de Holanda Rodrigues

int LIGAR = 4;//pino que voce ligou o rele 1
int LIMAO = 5;//pino que voce ligou o rele 2
int LARANJA = 6;//pino que voce ligou o rele 1
int GUARANA = 7;//pino que voce ligou o rele 2
int enviou = 0;

void setup()   {
pinMode(LIGAR, OUTPUT); //Configura o rele para ser uma saida
digitalWrite(LIGAR, HIGH);//Faz com que o rele seja desativado assim que o programa inicia
pinMode(LIMAO, OUTPUT); //Configura o rele para ser uma saida
digitalWrite(LIMAO, HIGH);//Faz com que o rele seja desativado assim que o programa inicia
pinMode(LARANJA, OUTPUT); //Configura o rele para ser uma saida
digitalWrite(LARANJA, HIGH);//Faz com que o rele seja desativado assim que o programa inicia
pinMode(GUARANA, OUTPUT); //Configura o rele para ser uma saida
digitalWrite(GUARANA, HIGH);//Faz com que o rele seja desativado assim que o programa inicia
Serial.begin(9600);//Inicia a porta serial
}
 
void loop(){
char c = Serial.read();
if (c == '2'){ //comando vindo do APP
digitalWrite(LIGAR, LOW);//Aciona Rele
}

if (c == '3'){ //comando vindo do APP
digitalWrite(LIMAO, LOW);//Aciona Rele
delay(7000); //Tempo que o rele fica acionado
digitalWrite(LIMAO, HIGH); //Desativa o Rele
}
if (c == '4'){ //comando vindo do APP
digitalWrite(LARANJA, LOW);//Aciona Rele
delay(7000); //Tempo que o rele fica acionado
digitalWrite(LARANJA, HIGH); //Desativa o Rele
}
if (c == '5'){ //comando vindo do APP
digitalWrite(GUARANA, LOW);//Aciona Rele
delay(7000); //Tempo que o rele fica acionado
digitalWrite(GUARANA, HIGH); //Desativa o Rele
}
}

