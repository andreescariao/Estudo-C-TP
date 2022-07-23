#ifndef LAB13_H
#define LAB13_H

class ContaDePoupanca
{
	 static float Taxa;	//Taxa de juros anual
	 float Saldo;
public:
	ContaDePoupanca(float); //Construtor Default
	float RendimentoMensal(); //Multiplica o saldo pela taxa de juros anual dividida por 12 ( o rendimento é somado ao saldo )
	static void ModificaTaxa(float); //Modifica a taxa de juros inicializando com um novo valor
};

#endif