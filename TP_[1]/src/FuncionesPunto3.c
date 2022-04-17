/*
 * FuncionesPunto3.c
 *
 *  Created on: 10 abr. 2022
 *      Author: izzy
 */
#include "TrabajoPrac1.h"

void getFloat(char mensaje[], char mensajeError[], float minimo, float maximo, float *numeroIngresado){

	float auxliarNumeroIngresado;
	int retornoScanf;

	if(minimo<maximo && mensaje!=NULL && mensajeError!=NULL)
	{
		printf("%s\n",mensaje);
		retornoScanf = scanf("%f",&auxliarNumeroIngresado);

		while(retornoScanf!=1 || minimo>auxliarNumeroIngresado || maximo<auxliarNumeroIngresado)
		{
			printf("%s\n",mensajeError);
			printf("%s\n",mensaje);
			fflush(stdin);
			retornoScanf = scanf("%f",&auxliarNumeroIngresado);
		}

		*numeroIngresado = auxliarNumeroIngresado;

	}

}

float PrecioConBTC(float* valor, float* resultado)
{
	float Bitcoin=4606954.55;

	if(valor!=NULL)
	{
		*resultado=Dividir(*valor,Bitcoin);
		return 1;
	}
	return 0;

}

float PrecioUnitario(float* valorDelVuelo, float* km, float* resultado)
{
	if(valorDelVuelo!=NULL && km!=NULL)
	{
		*resultado=Dividir(*valorDelVuelo,*km);
		return 1;
	}
	return 0;
}

float Diferencia(float* valorAerolineas, float* valorLatam, float* resultado)
{

	if(valorAerolineas!=NULL && valorLatam!=NULL)
		{
			*resultado=Resta(*valorAerolineas,*valorLatam);
			if(*resultado<0)
			{
				*resultado=Resta(0,*resultado);
				return 1;
			}
			return 1;
		}
		return 0;
}
