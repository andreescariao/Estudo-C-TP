#ifndef Retangulo_H
#define Retangulo_H

class Relogio
{
int hora,minuto,segundo; //Atributos do rel�gio
	
public:
	void setHora(int,int,int);	//Fun��o para atribuir as variaveis
	void getHora(int *,int *,int *);	//Fun��o para retornar o hor�rio com ponteiro
	void Avancar();	//Fun��o para avan�ar 1 segundo
};


#endif