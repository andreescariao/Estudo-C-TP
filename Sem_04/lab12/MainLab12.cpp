/* Aluno:André K Escarião Me / 119210793 / Unidade(04) / Laboratório(12)
Compilador Falcon C++
Programa de Classe Condicionador
*/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "Lab12.cpp"


int main()
{
	setlocale(LC_ALL, "");
	
	condicionador c1,c2;
	int opcao, aux = 0;
	
	//Padrão definido na questão para c1
	c1.setTemperaturaAmbiente(31);
	c1.setPotencia(5);
	
	//Padrão definido na questao para c2
	c2.setTemperaturaAmbiente(25);
	c2.setPotencia(10);
	
	//Resultados impressos
	cout << "Temperatura do condicionador 1: " << c1.calcular() << endl;
	cout << "Temperatura do condicionador 2: " << c2.calcular() << endl;
	
	
	return 0;
}