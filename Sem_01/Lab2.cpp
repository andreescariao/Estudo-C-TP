//Laborat�rio 02
//Enumeradores de mat�rias do segundo per�odo
#include <iostream>

using namespace std;

enum materias
{calculo=1, algebra_linear=2, fisica=3, quimica=4, fisica_experimental=5, tecnicas_de_programacao=6}; //Atribui um numero � cada mat�ria


int main(int argc, char** argv)
{

	cout << calculo << endl << algebra_linear << endl << fisica << endl; // Imprime o n�mero da respectiva mat�ria
	cout << quimica << endl << fisica_experimental << endl;
	cout << tecnicas_de_programacao << endl; 
	
	return 0;
}