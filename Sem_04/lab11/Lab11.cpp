#include "Lab11.h"

void Relogio::setHora(int h,int m,int s){		//Fun��o para atribuir as variaveis ao rel�gio

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

void Relogio::getHora(int *h, int *m, int *s){	//Fun��o para retornar a hora
       *h=hora;									//com utiliza��o de ponteiro
       *m=minuto;
       *s=segundo;
}


void Relogio::Avancar(){	//Fun��o para avan�ar um segundo
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