#include "CamaroteSuperior.h"


//Construtor default
	CamaroteSuperior::CamaroteSuperior(float valor):vip(valor)
	{
		adc=adicionalVipSuperior;
	}	
//Método retorna valor adicional do ingresso Vip CamaroteSuperior
float CamaroteSuperior::getValorSuperior(void){
	return getVip() + adc;
}