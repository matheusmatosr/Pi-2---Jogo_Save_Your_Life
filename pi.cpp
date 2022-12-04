#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#include <SoftwareSerial.h>

SoftwareSerial blueSerial(0,1); 

#define LUZ_1 6    
#define LUZ_2 7

#define endereco  0x27 // Endereços comuns: 0x27, 0x3F
#define colunas   20
#define linhas    4

LiquidCrystal_I2C lcd(endereco, colunas, linhas);

bool BOTAO_1 = 0;
bool BOTAO_2 = 0;
bool BOTAO_3 = 0;
bool BOTAO_4 = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Serial Monitor Conectado");

  blueSerial.begin(9600);
  Serial.print("Serial Bluetooth conectado");

  lcd.init(); // INICIA A COMUNICAÇÃO COM O DISPLAY
  lcd.backlight(); // LIGA A ILUMINAÇÃO DO DISPLAY
  lcd.print("Iniciando...");
  lcd.clear();
  lcd.print("Ira comecar o jogo!!");
  delay(2000);
  lcd.setCursor(1,2);
  lcd.print("# SaVe YoUr LiFe #");
  delay(4000);

  pinMode(LUZ_1,OUTPUT);
  pinMode(LUZ_2,OUTPUT);
  digitalWrite(LUZ_1,HIGH);
  digitalWrite(LUZ_2,HIGH);

  pinMode(8,INPUT_PULLUP);
  pinMode(9,INPUT_PULLUP);
  pinMode(10,INPUT_PULLUP);
  pinMode(11,INPUT_PULLUP);
  delay(1000);
  lcd.clear();
}

void respostaCorreta()
{
  lcd.print("Voce acertou!");
  digitalWrite(LUZ_1, LOW);
  delay(2000);
  digitalWrite(LUZ_1, HIGH);
}

void respostaErrada()
{
  lcd.print("Voce errou!");
  digitalWrite(LUZ_2, LOW);
  delay(2000);
  digitalWrite(LUZ_2, HIGH);
}

void loop()
{ 
    lcd.setCursor(0,0);
    lcd.print("1. Pandemia de 2020"); 
    lcd.setCursor(0,1);
    lcd.print("foi devido a:");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Dengue");
    lcd.setCursor(0, 1);
    lcd.print("B. Covid 19");
    lcd.setCursor(0, 2);
    lcd.print("C. Ebola");
    lcd.setCursor(0, 3);
    lcd.print("D. Macaco amarelo");
    delay(9000);
    lcd.clear();
    if (digitalRead(9) == LOW) {
      respostaCorreta();
    } else
    {
        respostaErrada();
    } 
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("2. Quantas vezes");
    lcd.setCursor(0,1);
    lcd.print("devemos escovar os");
    lcd.setCursor(0,2);
    lcd.print("dentes?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Escovar dentes?");
    lcd.setCursor(0,1);
    lcd.print("B. 1 vez ao dia");
    lcd.setCursor(0,2);
    lcd.print("C. Apos refeicoes");
    lcd.setCursor(0,3);
    lcd.print("D. 2 vez ao dia");
    delay(9000);
    lcd.clear();
    if (digitalRead(10) == LOW) 
    {
      respostaCorreta();
    } else 
    {
      respostaErrada();
    } 
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("3. Quais os sintomas");
    lcd.setCursor(0,1);
    lcd.print("da Diabetes?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Sede");
    lcd.setCursor(0,1);
    lcd.print("B. Fome");
    lcd.setCursor(0,2);
    lcd.print("C. Fadiga");
    lcd.setCursor(0,3);
    lcd.print("D. Todas acima");
    delay(9000);
    lcd.clear();
    if (digitalRead(11) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("4. Tempo pra trocar"); 
    lcd.setCursor(0,1);
    lcd.print("a escova?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Nao precisa");
    lcd.setCursor(0,1);
    lcd.print("B. 2 a 3 meses");
    lcd.setCursor(0,2);
    lcd.print("C. 9 anos");
    lcd.setCursor(0,3);
    lcd.print("D. 8 meses");
    delay(9000);
    lcd.clear();
    if (digitalRead(9) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("5. O que causa carie");
    lcd.setCursor(0,1);
    lcd.print("nos dentes?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Acidos");
    lcd.setCursor(0,1);
    lcd.print("B. Nicotina");
    lcd.setCursor(0,2);
    lcd.print("C. Cafeina");
    lcd.setCursor(0,3);
    lcd.print("D. Idade");
    delay(9000);
    lcd.clear();
    if (digitalRead(8) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("6.Qual exame previne");
    lcd.setCursor(0,1);
    lcd.print("o cancer de colo no");
    lcd.setCursor(0,2);
    lcd.print("utero?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Calcitocina");
    lcd.setCursor(0,1);
    lcd.print("B. Papanicolau");
    lcd.setCursor(0,2);
    lcd.print("C. Tiregloubina");
    lcd.setCursor(0,3);
    lcd.print("D. CEA");
    delay(9000);
    lcd.clear();
    if (digitalRead(8) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    } 
    delay(1500);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("7. Praticar atividades fisicas");
    lcd.setCursor(0,1);
    lcd.print("ajuda na prevencao");
    lcd.setCursor(0,2);
    lcd.print("do cancer ");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Nao ajuda");
    lcd.setCursor(0,1);
    lcd.print("B. Ajuda demais");
    lcd.setCursor(0,2);
    lcd.print("C. Pode piorar");
    lcd.setCursor(0,3);
    lcd.print("D. Nao e recomendado");
    delay(9000);
    lcd.clear();
    if (digitalRead(9) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("8. Quanto tempo o");
    lcd.setCursor(0,1);
    lcd.print("embriao pode ficar");
    lcd.setCursor(0,2);
    lcd.print("congelado");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Um dia");
    lcd.setCursor(0,1);
    lcd.print("B. 5 anos");
    lcd.setCursor(0,2);
    lcd.print("C. 10 anos");
    lcd.setCursor(0,3);
    lcd.print("D. Inderterminado");
    delay(9000);
    lcd.clear();
    if (digitalRead(11) == LOW) {
      respostaCorreta();
    } else{
        respostaErrada();
    }
    delay(1500);  

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("9. Como definir se");
    lcd.setCursor(0,1);
    lcd.print("um alimento e");
    lcd.setCursor(0,2);
    lcd.print("ultraprocessado");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Apenas aditivos");
    lcd.setCursor(0,1);
    lcd.print("B. + 5 ingredientes");
    lcd.setCursor(0,2);
    lcd.print("C. Tempo");
    lcd.setCursor(0,3);
    lcd.print("D. Acido e vitamina");
    delay(9000);
    lcd.clear();
    if (digitalRead(9) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("10. Usar fio dental");
    lcd.setCursor(0,1);
    lcd.print("e importante");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Sim, claro");
    lcd.setCursor(0,1);
    lcd.print("B. Nao");
    lcd.setCursor(0,2);
    lcd.print("C. As vezes");
    lcd.setCursor(0,3);
    lcd.print("D. Causa carie");
    delay(9000);
    lcd.clear();
    if (digitalRead(8) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    } 
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("11. Durante pandemia, em");
    lcd.setCursor(0,1);
    lcd.print("local fechado deve ");
    lcd.setCursor(0,2);
    lcd.print("se usar");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Cachicol");
    lcd.setCursor(0,1);
    lcd.print("B. Alivium");
    lcd.setCursor(0,2);
    lcd.print("C. Mascara");
    lcd.setCursor(0,3);
    lcd.print("D. Bone");
    delay(9000);
    lcd.clear();
    if (digitalRead(10) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    }
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("12. E um metodo de");
    lcd.setCursor(0,1);
    lcd.print("prevencao para");
    lcd.setCursor(0,2);
    lcd.print("a gripe");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Caminhar");
    lcd.setCursor(0,1);
    lcd.print("B. Frutas citricas");
    lcd.setCursor(0,2);
    lcd.print("C. Cigarro");
    lcd.setCursor(0,3);
    lcd.print("D. Vegetais");
    delay(9000);
    lcd.clear();
    if (digitalRead(9) == LOW) {
      respostaCorreta();
    } else{
        respostaErrada();
    }
    delay(1500);
  
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("13. Em uma pandemia");
    lcd.setCursor(0,1);
    lcd.print("e aconselhavel");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Namorar");
    lcd.setCursor(0,1);
    lcd.print("B. Fumar");
    lcd.setCursor(0,2);
    lcd.print("C. Ir na balada");
    lcd.setCursor(0,3);
    lcd.print("D. Manter distancia");
    delay(9000);
    lcd.clear();
    if (digitalRead(11) == LOW) {
      respostaCorreta();
    } else{
        respostaErrada();
    }
    delay(1500);

    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("14. Qual a principal");
    lcd.setCursor(0,1);
    lcd.print("causa da doenca");
    lcd.setCursor(0,2);
    lcd.print("Celiaca?");
    delay(4000);
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("A. Lactose");
    lcd.setCursor(0,1);
    lcd.print("B. Trigo");
    lcd.setCursor(0,2);
    lcd.print("C. Gluten");
    lcd.setCursor(0,3);
    lcd.print("D. Sacarose");
    delay(9000);
    lcd.clear();
    if (digitalRead(10) == LOW) {
      respostaCorreta();
    } else {
        respostaErrada();
    } 
    delay(1500);
}