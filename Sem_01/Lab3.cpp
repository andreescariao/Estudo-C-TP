//Laboratório 3
//Converter Graus em Fahrenheit ou vice-versa com Union e convertendo em duas casas decimais.
#include <iostream>
#include <iomanip>

using namespace std;

union Convert
{
	float celsius, fahrenheit;
};

int main()
{
	union Convert valor;
	
	int D;
	string conversao(" ");
	
	cout << "Digite a conversao que deseja fazer: " << endl; // Ler tipo de conversão.
	cin >> conversao;
	
	cout << fixed << setprecision(2); // Ajusta valores em 2 casas decimais.
	
	
	if(conversao == "celsius") 
	{
		cout << "Insira o valor em Fahrenheit para a conversao: " << endl; // Ler valor em graus fahrenheit e converte para celsius.
		cin >> valor.fahrenheit;
		
		D = (valor.fahrenheit - 32) / 1.8;
		
		cout << D <<" Graus celsius" << endl;
		
	}else{ 
	
		cout << "Insira o valor em Celsius para a conversao: " << endl; // Ler valor em graus celsius e converte para fahrenheit.
		cin >> valor.celsius;
		
		D = (valor.celsius * 1.8) +32;
		
		cout << D << " Graus fahrenheit" << endl;

	}
	
	return 0;
}