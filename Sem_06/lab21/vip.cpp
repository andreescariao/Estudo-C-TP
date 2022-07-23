#include "vip.h"

//Construtor default
vip::vip(float valor):ingresso(valor)
{
	adicional = adicionalVip;
}
//Retorna valor do ingresso com adicional do vip
float vip::getVip(void){
	return valor+adicional;
}