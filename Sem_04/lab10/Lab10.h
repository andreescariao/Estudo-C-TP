#ifndef LAB10_H
#define LAB10_H

class Rational
{
	
 int numerador;			//Numerador da fra��o
 int denominador; 		//Denominador da fra��o
	
public:
	
	Rational();
	void Multiplicar(Rational,Rational); //M�todo para Multiplicar
	void Dividir(Rational, Rational);	 //M�todo para dividir
	void Imprimir();				   	 //M�todo Imprimir no formato a/b
	float ImprimirFloat();				 //M�ttodo imprimir no formato float
	void setNumerador(int);
	void setDenominador(int);
	int getNumerador();
	int getDenominador();
	
};


#endif
