/*
 * calculos.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Mati
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "calculos.h"

double DiferenciaDePrecios(double aerolineas, double latam)

{
	double retorno;
	retorno = aerolineas - latam;
	if (retorno < 0)
	{
		retorno = retorno * -1;
	}
	return retorno;
}

double CalcularPrecioBitCoin(double precio, double bitCoinPrecio)
{
	double retorno;
	retorno = precio / bitCoinPrecio;
	return retorno;
}

double CalcularPrecioPorKilometro(double precio, double km)
{
	double retorno;
	retorno = precio / km;
	return retorno;

}

double CalcularInteresTarjetaCredito(double precio, float interes)
{
	double retorno;
	interes = interes /100;

	retorno = precio * interes;
	retorno = precio + retorno;
	return retorno;

}

double CalcularDescuentoTarjetaDebito(double precio, float descuento)
{
	double retorno;
	descuento = descuento / 100;

	retorno = precio * descuento;
	retorno = precio - retorno;
	return retorno;

}
