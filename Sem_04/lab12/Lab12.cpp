#include "Lab12.h"

condicionador::condicionador(){
	potencia=0, temperatura=0;
}

//Função para definir temperatura externa
void condicionador::setTemperaturaAmbiente(float temp){	
	temperatura = temp;
}


//Função para definir potencia dada pelo usuario
void condicionador::setPotencia(float pot){	
		potencia = pot;
}


//calcular e retornar temperatura ambiente
float condicionador::calcular(){
	return temperatura - (potencia*1.8);
}