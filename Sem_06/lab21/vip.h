#include "ingresso.h"

#ifndef VIP_H
#define VIP_H

//Constante definida pelo vendedor
#define adicionalVip 5

class vip : public ingresso
{
	protected:
	float adicional;
	public:
		//Construtor default
		vip(float);
		//Retorna valor do ingresso com adicional do vip
		float getVip(void);
		
};


#endif