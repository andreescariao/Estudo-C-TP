#ifndef Retangulo_H
#define Retangulo_H

class Relogio
{
int hora,minuto,segundo; //Atributos do relógio
	
public:
	void setHora(int,int,int);	//Função para atribuir as variaveis
	void getHora(int *,int *,int *);	//Função para retornar o horário com ponteiro
	void Avancar();	//Função para avançar 1 segundo
};


#endif