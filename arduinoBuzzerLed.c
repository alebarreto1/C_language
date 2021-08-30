//Variaveis para armazenar os pinos de cada componente conectado
const int pino_botao1 = 7;
const int pino_botao2 = 8;
const int pino_botao3 = 9;
const int pino_botao4 = 10;
const int pino_buzzer = 12;
const int pino_led = 13;

//frequencia de cada nota musical
const int c = 261; //do
const int d = 293; // re
const int e = 329; // mi
const int f = 349; // fa

void setup() {
//configura os pinos
pinMode(pino_botao1, INPUT_PULLUP);
pinMode(pino_botao2, INPUT_PULLUP);
pinMode(pino_botao3, INPUT_PULLUP);
pinMode(pino_botao4, INPUT_PULLUP);
pinMode(pino_buzzer, OUTPUT);
pinMode(pino_led, OUTPUT);
}

void loop() {
//salva o estado de cada botao
bool estado_botao1 = digitalRead(pino_botao1);
bool estado_botao2 = digitalRead(pino_botao2);
bool estado_botao3 = digitalRead(pino_botao3);
bool estado_botao4 = digitalRead(pino_botao4);

if(estado_botao1 == LOW){
  tone(pino_buzzer, c);
  digitalWrite(pino_led, HIGH);
  }
else if (estado_botao2 == LOW){
  tone(pino_buzzer, d);
  digitalWrite(pino_led, HIGH);
}
else if (estado_botao3 == LOW){
  tone(pino_buzzer, e);
  digitalWrite(pino_led, HIGH);
}
else if (estado_botao4 == LOW){
  tone(pino_buzzer, f);
  digitalWrite(pino_led, HIGH);
}
else{
  noTone(pino_buzzer);
  digitalWrite(pino_led, LOW);

}
}
