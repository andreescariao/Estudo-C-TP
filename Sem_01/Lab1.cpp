// Distancia entre dois pontos com Struct.

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

struct Ponto
{
	int x, y;
};

int main(int argc, char** argv)
{

	struct Ponto p[2];
    float D;
    
	
	cout << "digite o ponto1(x1,y1):"<<endl; // Ponto 1
	cin >> p[0].x >> p[0].y;
	
	cout << "digite o ponto2(x2,y2):"<<endl; // Ponto 2
	cin >> p[1].x >> p[1].y;
	
	cout<< fixed << setprecision(2); // Ajustar o numero de casas decimais
	
	D = sqrt( pow((float)(p[1].y-(float)p[0].y),2)+pow((float)(p[1].x-(float)p[0].x),2) ); // Calculo da distancia
	
	cout << "Distancia entre os pontos: " << D << endl;
	
	
	return 0;
}