/*
 * TrabajoPractico.c
 *
 *  Created on: 3 abr. 2022
 *      Author: izzy
 */


#include "TrabajoPrac1.h"


int Menu(){
	int Salir;
	float opciones;
	int retornoResultados;
	char x,y,z;

	float Km;

	float Aerolineas;
	float AerolineasDebito;
	float AerolineasCredito;
	float AerolineasBTC;
	float AerolineasPrecioUnitario;

	float Latam;
	float LatamDebito;
	float LatamCredito;
	float LatamBTC;
	float LatamPrecioUnitario;

	float diferencia;

	x='x';
	y='y';
	z='z';

	Km=0;
	Aerolineas=0;
	Latam=0;

	do{
		printf("--------------------------------------------------------------------------");
		if(Km!=0)
		{
			printf("\n\t1. Ingresar Kilómetros: ( km=%.2f)\n\n",Km);
		}
		else
		{
			printf("\n\t1. Ingresar Kilómetros: ( km=%c)\n\n",x);
		}
		if(Aerolineas!=0 && Latam!=0)
		{
			printf("\t2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f)\n",Aerolineas,Latam);
		}
		else
		{
			printf("\t2. Ingresar Precio de Vuelos: (Aerolíneas=%c, Latam=%c)\n",y,z);
		}

			puts("\n\t3. Calcular todos los costos:");
			puts("\ta) Tarjeta de débito (descuento 10%)");
			puts("\tb) Tarjeta de crédito (interés 25%)");
			puts("\tc) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)");
			puts("\td) Mostrar precio por km (precio unitario)");
			puts("\te) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)\n");

			puts("\t4. Informar Resultados");

			puts("\n\t5. Carga forzada de datos\n");

			puts("\t6. Salir");

			puts("------------------------------------------------------------------------");

			getFloat("\nIngrese una de las Opciones: 1.- 2.- 3.- 4.- 5.- 6.","No ingreso ninguna opcion correcta",1,6,&opciones);

			switch((int)opciones)
			{
				case 1:
					getFloat("Ingrese los Kilometros: ","Error, el dato ingresado no es correcto o no esta entre el rango indicado",0,90000,&Km);
					break;
				case 2:
					IngresoPreciosVuelos(&Aerolineas,&Latam);
					break;
				case 3:
					CalcularTodosLosCostos(&Km,&Aerolineas,&AerolineasDebito,&AerolineasCredito,&AerolineasBTC,&AerolineasPrecioUnitario,&Latam,&LatamDebito,&LatamCredito,&LatamBTC,&LatamPrecioUnitario,&diferencia);
					break;
				case 4:
					retornoResultados = InformarResultados(Km,Aerolineas,AerolineasDebito,AerolineasCredito,AerolineasBTC,AerolineasPrecioUnitario,Latam,LatamDebito,LatamCredito,LatamBTC,LatamPrecioUnitario,diferencia);
					if(retornoResultados == 1)
					{
						Salir=6;
					}
					break;
				case 5:
					CargaForzada();
					return 0;
					break;
				case 6:
					Salir=6;
					break;
			}

	}while(Salir!=6);

	return 0;

}


void IngresoPreciosVuelos(float* Aerolineas, float* Latam)
{

	puts("- Precio vuelo Aerolíneas:");
	puts("- Precio vuelo Latam:");
	getFloat("Ingrese vuelo Aerolíneas:","Error, el dato ingresado no es correcto o no esta entre el rango indicado",0,10000000,Aerolineas);
	getFloat("Ingrese vuelo Latam:","Error, el dato ingresado no es correcto o no esta entre el rango indicado",0,10000000,Latam);
}

void CalcularTodosLosCostos(float* Km, float* Aerolineas, float* AerolineasDebito, float* AerolineasCredito, float* AerolineasBTC, float* AerolineasPrecioUnitario, float* Latam, float* LatamDebito,float* LatamCredito,float* LatamBTC, float* LatamPrecioUnitario, float* diferencia)
{
	if(*Km==0)
	{
		puts("\nDEBE INGRESAR LOS KILOMETROS ANTES\n");
	}
	else if(*Aerolineas==0 && *Latam==0)
	{
		puts("\nDEBE INGRESAR LOS VALORES DE LOS VUELOS ANTES\n");
	}
	else
	{
		PorcentajeDeDescuentoDelValorTotal(Latam,10,LatamDebito);
		PorcentajeDeAumentoDelValorTotal(Latam,25,LatamCredito);
		PrecioConBTC(Latam,LatamBTC);
		PrecioUnitario(Latam,Km,LatamPrecioUnitario);

		PorcentajeDeDescuentoDelValorTotal(Aerolineas,10,AerolineasDebito);
		PorcentajeDeAumentoDelValorTotal(Aerolineas,25,AerolineasCredito);
		PrecioConBTC(Aerolineas,AerolineasBTC);
		PrecioUnitario(Aerolineas,Km,AerolineasPrecioUnitario);

		Diferencia(Latam,Aerolineas,diferencia);
	}
}

float InformarResultados(float Kilometros, float valorAerolineas,float A_aerolineas,float B_aerolineas,float C_aerolineas,float D_aerolineas, float valorLatam,float A_latam,float B_latam,float C_latam,float D_latam,float Diferencia)
{
	float opciones;


	if(Kilometros!=0 && valorAerolineas!=0 && valorLatam!=0)
	{
		printf("--------------------------------------------------------");

			printf("\nKilometros ingresados: %.2f\n",Kilometros);

			printf("“Latam: %.2f\n",valorAerolineas);
			printf("\ta) Precio con tarjeta de débito: %.2f\n",A_aerolineas);
			printf("\tb) Precio con tarjeta de crédito: %.2f\n",B_aerolineas);
			printf("\tc) Precio pagando con bitcoin : %.8f\n",C_aerolineas);
			printf("\td) Precio unitario: %.4f\n",D_aerolineas);

			printf("Aerolíneas: %.2f\n",valorLatam);
			printf("\ta) Precio con tarjeta de débito: %.2f\n",A_latam);
			printf("\tb) Precio con tarjeta de crédito: %.2f\n",B_latam);
			printf("\tc) Precio pagando con bitcoin : %.8f\n",C_latam);
			printf("\td) Precio unitario: %.4f\n",D_latam);
			printf("\t\nLa diferencia de precio es : %.2f\n",Diferencia);

		printf("--------------------------------------------------------");


			getFloat("\n\tPara volver al menu ingrese: 1\n\tsalir ingrese: 2","No esta ingresando ninguna de las opciones",1,2,&opciones);

			switch((int)opciones)
			{
				case 1:
					Menu();
					break;
				case 2:
					return 1;
					break;
			}
	}
	else
	{
		puts("\nDEBE TENER LOS CALCULOS REALIDADOS\n");
	}
	return 0;

}

void CargaForzada()
{
	float km=7090;
	float Aerolineas=162965;
	float Latam=159339;

	float A_debito;
	float A_credito;
	float A_btc;
	float A_unitario;
	float L_debito;
	float L_credito;
	float L_btc;
	float L_unitario;
	float diferencia;

	CalcularTodosLosCostos(&km,&Aerolineas,&A_debito,&A_credito,&A_btc,&A_unitario,&Latam,&L_debito,&L_credito,&L_btc,&L_unitario,&diferencia);
	InformarResultados(km,Aerolineas,A_debito,A_credito,A_btc,A_unitario,Latam,L_debito,L_credito,L_btc,L_unitario,diferencia);
}






