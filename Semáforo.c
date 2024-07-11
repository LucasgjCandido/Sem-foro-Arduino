int vermelho = 4;
int amarelo = 3;
int verde = 2;
 
void setup() {
  // indicando para o arduíno quais portas vamos usar
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop() {
  
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
 
  
  delay(2000);
 
  // apagamos o amarelo e ligamos o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  delay(5000);  
 
  // para finalizar, apagamos o vermelho e ligamos o verde
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);

  delay(5000);
}
