#ifndef LAB12_H
#define LAB12_H


class condicionador
{
	float temperatura;
 	float potencia;
    
public:
	condicionador();
	void setTemperaturaAmbiente(float);	//Define temperatura externa
	void setPotencia(float);	//Define potencia 
	float calcular();	//calcula temperatura
};


#endif