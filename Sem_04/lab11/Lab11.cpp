#include "Lab11.h"

void Relogio::setHora(int h,int m,int s){		//Função para atribuir as variaveis ao relógio

	if(h < 24 && h > 0)
        hora = h;
       else
        hora = 0;
    if(m < 60 && m > 0)
        minuto = m;
       else
       	minuto = 0;
    if(s < 60 && s > 0)
    	segundo = s;
       else
        segundo = 0;
    
}

void Relogio::getHora(int *h, int *m, int *s){	//Função para retornar a hora
       *h=hora;									//com utilização de ponteiro
       *m=minuto;
       *s=segundo;
}


void Relogio::Avancar(){	//Função para avançar um segundo
	segundo++;

   if(segundo>59){
    segundo=0;
    minuto++; 
	  	  	  }
      
  if(minuto>59){
    minuto=0;
    hora++;
 	 	 	 }
 
  if(hora>23){
    hora=0;
    minuto=0;
    segundo=0;
			}

}