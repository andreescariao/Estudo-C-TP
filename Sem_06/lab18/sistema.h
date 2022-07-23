#ifndef SISTEMA_H
#define SISTEMA_H

class sistema{
	protected:
		string nome;
		string CGC;
		int tipo;
		int imposto;
	
	public:
	sistema(string nome, string CGC);
	void checa(void);
	void imprime();
};

#endif
