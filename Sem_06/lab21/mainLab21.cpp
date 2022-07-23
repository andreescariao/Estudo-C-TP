/*------------------------------------------------------
|       Aluno:André K Escarião Me ( 119210793 )        |
|		     Unidade(06) / Laboratório(21)             |
|				Compilador Falcon C++				   |
|			  										   |
|	   	Programa: Programa de venda de Ingressos       |
|				   									   |
|------------------------------------------------------*/

#include <stdlib.h>
#include <locale>
#include <iostream>
using namespace std;

//Constantes definidas pelo vendedor
#define valorIngresso 10

#include "ingresso.cpp"
#include "vip.cpp"
#include "normal.cpp"
#include "CamaroteInferior.cpp"
#include "CamaroteSuperior.cpp"

int main()
{
	setlocale(LC_ALL, "");


	ingresso ingre(valorIngresso);

	int op;
		cout << "[1] para Ingresso Normal. " << endl
		   	 << "[2] para Ingresso Vip. " << endl;
	cin >> op;

	//Opção ingresso normal
	if(op == 1)
	{

		system("cls");

		//Cria objeto inresso normal
		normal nor(valorIngresso);
		//Imprime ingresso normal
		nor.imprime();
		//Imprime valor do ingresso
		nor.imprimir();

		//Opção ingresso vip
	}
	else if(op == 2)
	{

		system("cls");

		cout << "Ingresso vip" << endl;
		int opc;
		cout << "[1] para Camarote Superior. " << endl
		   	 << "[2] para Camarote Inferior. " << endl;
		cin >> opc;

		//Camarote Superior
		if(opc == 1)
		{
			system("cls");

			cout << "Camarote Superior: " << endl;
			//Cria objeto ingresso Vip Camarote Superior
			CamaroteSuperior CamSup(valorIngresso);

			//Recebe valor do ingresso vip com adicional superior
			cout << "Valor ingresso Vip Camarote Superior: " << CamSup.getValorSuperior() << endl;



			//Camarote Inferior
		}
		else if(opc == 2)
		{
			system("cls");

			cout << "Camarote Inferior: " << endl;

			//Cria objeto inresso Vip Camarote Inferior
			CamaroteInferior CamInf(valorIngresso);

			//Recebe valor do ingresso vip Camarote Inferior(sem adicional superior)
			cout << "Valor do ingresso Vip Camarote Inferior: " << CamInf.getVip() << endl;


		}
	}



	return 0;
}
