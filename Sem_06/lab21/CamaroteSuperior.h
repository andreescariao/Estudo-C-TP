#include "vip.h"

#ifndef CamaroteSuperior_h
#define CamaroteSuperior_h

//constante definida pelo vendedor
#define adicionalVipSuperior 5

class CamaroteSuperior : public vip
{
	//Valor adicional do ingresso Vip CamaroteSuperior
	float adc;
	
	public:
		//Construtor default
		CamaroteSuperior(float);	
		//Método retorna valor adicional do ingresso Vip CamaroteSuperior
		float getValorSuperior(void);
};

#endif