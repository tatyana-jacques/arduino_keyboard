#define tecla1 2
#define tecla2 3 
#define tecla3 4
#define tecla4 5
#define tecla5 6
#define tecla6 7
#define tecla7 8
#define tecla8 9
#define teclaDeFuncao 10 
#define falante 11

#define sol2 195.99
#define la2 220.00
#define si2 246.94
#define do3 261.63 
#define do3_sustenido 277.18
#define re3 293.66 
#define re3_sustenido 311.12
#define mi3 329.63
#define fa3 349.23 
#define fa3_sustenido 369.99
#define sol3 392.00
#define sol3_sustenido 415.30
#define la3 440.00 
#define la3_sustenido 466.16
#define si3 493.88 
#define do4 523.25
#define re4 587.32

bool funcaoAdicional = false;
bool botaoPressionado = false;

void setup() {
  pinMode (tecla1, INPUT_PULLUP); 
  pinMode (tecla2, INPUT_PULLUP); 
  pinMode (tecla3, INPUT_PULLUP);
  pinMode (tecla4, INPUT_PULLUP);
  pinMode (tecla5, INPUT_PULLUP);
  pinMode (tecla6, INPUT_PULLUP);
  pinMode (tecla7, INPUT_PULLUP);
  pinMode (tecla8, INPUT_PULLUP);
  pinMode (teclaDeFuncao, INPUT_PULLUP);
  vinheta();
}

void loop() {
  while(digitalRead(tecla1) ==LOW){
    if (funcaoAdicional ==false){tone (falante,do3);}
    else if (funcaoAdicional ==true){tocarMelodia(1);}
  }

  while(digitalRead(tecla2) ==LOW){
    if (funcaoAdicional ==false){tone (falante,re3);}
    else if (funcaoAdicional ==true){tocarMelodia(2);}
  }

  while(digitalRead(tecla3) ==LOW){
    if (funcaoAdicional ==false){tone (falante,mi3);}
    else if (funcaoAdicional ==true){tocarMelodia(3);}
  }

  while(digitalRead(tecla4) ==LOW){
    if (funcaoAdicional ==false){tone (falante,fa3);}
    else if (funcaoAdicional ==true){tocarMelodia(4);}
  }

  while(digitalRead(tecla5) ==LOW){
    if (funcaoAdicional ==false){tone (falante,sol3);}
    else if (funcaoAdicional ==true){tocarMelodia(5);}
  }

  while(digitalRead(tecla6) ==LOW){
    if (funcaoAdicional ==false){tone (falante,la3);}
    else if (funcaoAdicional ==true){tocarMelodia(6);}
  }

  while(digitalRead(tecla7) ==LOW){
    if (funcaoAdicional ==false){tone (falante,si3);}
    else if (funcaoAdicional ==true){tocarMelodia(7);}
  }

  while(digitalRead(tecla8) ==LOW){
    if (funcaoAdicional ==false){tone (falante,do4);}
    else if (funcaoAdicional ==true){tocarMelodia(8);}
  }

   while(digitalRead(teclaDeFuncao) == LOW){
    if(botaoPressionado == false){
      funcaoAdicional = !funcaoAdicional;
      botaoPressionado = true;
    }
   }

   botaoPressionado = false;
   delay(10); //para não sobrecarregar o sistema
   noTone(falante);
}











  
