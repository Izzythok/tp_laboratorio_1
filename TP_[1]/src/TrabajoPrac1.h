/*
 * TrabajoPractico1.h
 *
 *  Created on: 3 abr. 2022
 *      Author: izzy
 *      float Blatam,float Clatam, float Dlatam,
 */
#ifndef TrabajoPractico1_H_
#define TrabajoPractico1_H_

#include <stdio.h>
#include <stdlib.h>


/// @fn Menu de Vuelos
/// @return Devuelve 0 cuanto salis del menu
int Menu();

/// @fn Ingresa los pedios de los vuelos.
/// @param Recibe la direcion de memoria de la variable donde se va almacenar el precio de Aerolineas.
/// @param Recibe la direcion de memoria de la variable donde se va almacenar el precio de Latam.
void IngresoPreciosVuelos(float* Aerolineas, float* Latam);

/// @fnk Calcula todas las operaciones juntas
/// @param Km: Recibe la direcion de memoria de la variable donde se almacena el valor de los kilometros.
/// @param Aerolineas: Recibe la direcion de memoria de la variable donde se almacena el precio del vuelo de Aerolineas.
/// @param AerolineasDebito: Recibe la direcion de memoria de la variable donde se va almacenar el valor con descuento con tarjeta de Debito.
/// @param AerolineasCredito: Recibe la direcion de memoria de la variable donde se va almacenar el valor con aumento con tarjeta de credito.
/// @param AerolineasBTC: Recibe la direcion de memoria de la variable donde se va almacenar el valor en precio bitcoin.
/// @param AerolineasPrecioUnitario: Recibe la direcion de memoria de la variable donde se va almacenar el valor del precio por kilometro.
/// @param Latam: Recibe la direcion de memoria de la variable donde se almacena el valor del vuelo de Latam.
/// @param LatamDebito: Recibe la direcion de memoria de la variable donde se va almacenar el valor con descuento con tarjeta de Debito.
/// @param LatamCredito: Recibe la direcion de memoria de la variable donde se va almacenar el valor con aumento con tarjeta de credito.
/// @param LatamBTC: Recibe la direcion de memoria de la variable donde se va almacenar el valor en precio bitcoin.
/// @param LatamPrecioUnitario: Recibe la direcion de memoria de la variable donde se va almacenar el valor del precio por kilometro.
/// @param diferencia: Recibe la direcion de memoria de la variable donde se va almacenar el valor de la diferencia entre dos valores.
void CalcularTodosLosCostos(float* Km, float* Aerolineas, float* AerolineasDebito, float* AerolineasCredito, float* AerolineasBTC, float* AerolineasPrecioUnitario, float* Latam, float* LatamDebito,float* LatamCredito,float* LatamBTC, float* LatamPrecioUnitario, float* diferencia);

/// @fn Informa los resultados de las operaciones.
/// @param Kilometros: Recibe el valor de los kilometros
/// @param valorAerolineas: Recibe el valor del precio Aerolineas
/// @param A_aerolineas: Recibe el valor del descuento con tarjeta de debito.
/// @param B_aerolineas: Recibe el valor del aumento con tarjeta de credito.
/// @param C_aerolineas: Recibe el valor en precio bitcoin.
/// @param D_aerolineas: Recibe el valor del precio por kilometro.
/// @param valorLatam: Recibe el valor del precio Latam
/// @param A_latam: Recibe el valor del descuento con tarjeta de debito.
/// @param B_latam: Recibe el valor del aumento con tarjeta de credito.
/// @param C_latam: Recibe el valor en precio bitcoin.
/// @param D_latam: Recibe el valor del precio por kilometro.
/// @param Diferencia: Recibe el valor de la diferencia entre dos valores.
/// @return Devuelve 1 para salir y 0 para cerrar la funcion
float InformarResultados(float Kilometros, float valorAerolineas,float A_aerolineas,float B_aerolineas,float C_aerolineas,float D_aerolineas, float valorLatam,float A_latam,float B_latam,float C_latam,float D_latam,float Diferencia);

/// @fn Ejecuta los calculos y los muestra, con datos fijos.
void CargaForzada();



/// @fn Suma dos valores.
/// @param numero1: recibe un valor.
/// @param numero2: recibe un valor.
/// @return Devuelve el valor sumado
float Suma(float numero1, float numero2);

/// @fn Resta dos valores
/// @param numero1: recibe un valor.
/// @param numero2: recibe un valor.
/// @return Devuelve el valor de la resta
float Resta(float numero1, float numero2);

/// @fn Dividir dos valores
/// @param numero1: recibe un valor.
/// @param numero2: recibe un valor.
/// @return Devuelve el valor de la Divicion.
float Dividir(float numero1, float numero2);

/// @fn Multiplica dos valores
/// @param numero1: recibe un valor.
/// @param numero2: recibe un valor.
/// @return Devuelve el valor multiplicado.
float Multiplicar(float numero1, float numero2);

/// @fn Calcula el descuento de un valor por porcentaje
/// @param valor: recibe la direccion de memoria de la variable que contiene el valor a calcular.
/// @param porcentaje: Recibe el valor del porcentaje
/// @param valorDevuelto: Recibe la direccion de memoria de la variable donde se va a guardar el resultado.
/// @return devuelve 1 si los datos por argumento son correctos y 0 si son basura(NULL)
float PorcentajeDeDescuentoDelValorTotal(float* valor,float porcentaje,float* valorDevuelto);

/// @fn Calcula el aumento de un valor por porcentaje
/// @param valor: recibe la direccion de memoria de la variable que contiene el valor a calcular.
/// @param porcentaje: Recibe el valor del porcentaje
/// @param valorDevuelto: Recibe la direccion de memoria de la variable donde se va a guardar el resultado.
/// @return devuelve 1 si los datos por argumento son correctos y 0 si son basura(NULL)
float PorcentajeDeAumentoDelValorTotal(float *valor, float porcentaje, float* valorDevuelto);



/// @fn Devuelve un valor validado correctamente.
/// @param mensaje: Recibe un mensaje.
/// @param mensajeError: Recibe un mensaje de error.
/// @param minimo: recibe un valor minimo.
/// @param maximo: recibe un valor maximo.
/// @param numeroIngresado: Recibe la direccion de memoria de una variable donde se va a guardar el valor devuelto validado.
void getFloat(char mensaje[], char mensajeError[], float minimo, float maximo, float *numeroIngresado);

/// @fn Calcula el precio en bitcoin.
/// @param valor: Recibe la direccion de memoria de la variable que contiene el valor.
/// @param resultado: Recibe la direccion de memoria de la variable donde se va a guardar el valor en bitcoin
/// @return devuelve 1 si los datos por argumento son correctos y 0 si son basura(NULL)
float PrecioConBTC(float* valor, float* resultado);

/// @fn Calcula el precio por kilometro.
/// @param valorDelVuelo: Recibe la direccion de memoria de la variable que contiene el precio del vuelo.
/// @param km: Recibe la direccion de memoria de la variable que contiene el valor  en kilomentros.
/// @param resultado: Recibe la direccion de memoria de la variable donde se va a guardar.
/// @return devuelve 1 si los datos por argumento son correctos y 0 si son basura(NULL)
float PrecioUnitario(float* valorDelVuelo, float* km, float* resultado);

/// @fn Calcula la diferencia de dos valores.
/// @param valorAerolineas: Recibe la direccion de memoria de la variable que contiene el precio de aerolineas
/// @param valorLatam: Recibe la direccion de memoria de la variable que contiene el precio de Latam
/// @param resultado:  Recibe la direccion de memoria de la variable donde se va a guardar.
/// @return  devuelve 1 si los datos por argumento son correctos y 0 si son basura(NULL)
float Diferencia(float* valorAerolineas, float* valorLatam, float* resultado);



#endif
