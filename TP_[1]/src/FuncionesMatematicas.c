/*
 * FuncionesMatematicas.c
 *
 *  Created on: 15 abr. 2022
 *      Author: izzy
 */
#include "TrabajoPrac1.h"

float Suma(float numero1, float numero2)
{
	float retorno;
	retorno=numero1+numero2;
	return retorno;
}

float Resta(float numero1, float numero2)
{
	float retorno;
	retorno=numero1-numero2;
	return retorno;
}
float Dividir(float numero1, float numero2)
{
	float retorno =0;

	if(numero2!=0)
	{
		retorno=numero1/numero2;
	}
	return retorno;
}

float Multiplicar(float numero1, float numero2)
{
	float retorno;
	retorno = numero1*numero2;
	return retorno;
}

float PorcentajeDeDescuentoDelValorTotal(float* valor, float porcentaje,float* valorDevuelto)
{
	if(valor!=NULL && porcentaje!=0)
	{
		*valorDevuelto=Resta(*valor,Multiplicar(*valor,Dividir(porcentaje,100)));
		//*valorDevuelto=(*valor)-((*valor)*(porcentaje/100));
		return 1;
	}
	return 0;
}

float PorcentajeDeAumentoDelValorTotal(float *valor, float porcentaje, float* valorDevuelto)
{
	if(valor!=NULL && porcentaje!=0)
		{
			*valorDevuelto=Suma(*valor,Multiplicar(*valor,Dividir(porcentaje,100)));
			return 1;
		}
		return 0;
}

