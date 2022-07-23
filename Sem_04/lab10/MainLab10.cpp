/* Aluno:André K Escarião Me / 119210793 / Unidade(04) / Laboratório(10)
Programa de Classe Rational com métodos Multiplicar, Dividir, Imprimir a/b e Imprimir float 
*/

#include <iostream>
#include <locale.h>
#include <cstdlib>

using namespace std;
#include "Lab10.cpp"

int main()
{
	setlocale(LC_ALL, "");
	
	Rational fr,f1,f2;
	
	int numerador1, numerador2, denominador1, denominador2;
	int opcao, aux = 0;
	
	
	
		
	cout << "Digite o numerador da fração 1: " << endl;
	cin >> numerador1;
	f1.setNumerador(numerador1);
	
	cout << "Digite o denominador da fração 1: " << endl;
	cin >> denominador1;
	f1.setDenominador(denominador1);
	
	cout << "Digite o numerador da fração 2: " << endl;
	cin >> numerador2;
	f2.setNumerador(numerador2);
	
	cout << "Digite o denominador da fração 2: " << endl;
	cin >> denominador2;
	f2.setDenominador(denominador2);
	
	
	while(aux != 1){ //Menu Inicial
 		cout <<  "Operações com Números Racionais " <<endl
			<< "1-Multiplicar " <<endl
			<< "2-Dividir " << endl
			<< "3-Imprimir na forma a/b " << endl
			<< "4-Imprimir como ponto flutuante " << endl
			<< "0-Finalizar Programa " << endl;
		cin >> opcao;
		
		system("cls");
		switch(opcao)
		{
			case 1:
				fr.Multiplicar(f1,f2);
				break;
			case 2:
				fr.Dividir(f1,f2);
				break;
			case 3:
				fr.Imprimir();
				break;
			case 4:
				cout << "Impresso na forma de float: " << fr.ImprimirFloat() << endl;
				break;
			case 0:
				aux = 1;
				break;
			default:
				break;
		}
		cout << endl;
		system("pause");
		system("cls");
	}
	
	
	
	return 0;
	
}