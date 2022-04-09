/*
 * funciones.c
 *
 *  Created on: 6 abr. 2022
 *      Author: Mati
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "funciones.h"




int verificarIngresoDeDatos(int fAerolineas, int ffLatam, int fKm, int fBitCoin)
{
	int retorno = 0;

	if (fAerolineas == 1 && ffLatam == 1 && fKm == 1)
	{
		retorno = 1;
	}
	return retorno;
}

float CalcularPrecioBitCoin(float vuelo, float bitCoinPrecio)
{
	float retorno;
	retorno = vuelo / bitCoinPrecio;
	return retorno;
}

float CalcularPrecioPorKilometro(float vuelo, float km)
{
	float retorno;
	retorno = vuelo / km;
	return retorno;

}

float CalcularInteresTarjetaCredito(float vuelo, float km)
{
	float retorno;
	retorno = vuelo * 0.25;
	retorno = vuelo + retorno;
	return retorno;

}

float CalcularDescuentoTarjetaDebito(float vuelo, float km)
{
	/*3. Calcular todos los costos:
	 a) Tarjeta de débito (descuento 10%)
	 */
	float retorno;
	retorno = vuelo * 0.10;
	retorno = vuelo - retorno;
	return retorno;

}

void ImprimirExitoAlCalcular()
{

	printf("Los costos fueron calculados...\n");
	system("pause");
}

void ImprimirCasoIncorrecto()
{
	printf("Opcion incorrecta!\n\n");
	printf("Volviendo al menu... \n");
	system("pause");
}

char menuSalida()
{
	char salida;
	printf("seguro quiere salir? 's' o 'n'");
	fflush(stdin);
	scanf("%c", &salida);
	salida = tolower(salida);
	while (salida != 'n' && salida != 's')
	{
		printf("Opcion incorrecta, reintentar: ");
		fflush(stdin);
		scanf("%c", &salida);
		salida = tolower(salida);
	}

	if (salida == 's')
	{
		printf("\nSaliendo muchas gracias.");

	}
	else
	{
		printf("\nVolviendo al menu... \n");
		system("pause");
	}

	return salida;

}

int ImprimirMenuPrecioVuelos()
{
	int opcion;
	printf("*****Menu Precio de los Vuelos*****");
	printf("\n");
	printf("Elegir una opcion: ");
	printf("\n");
	printf("1. Precio Vuelos Aerolineas \n");
	printf("2. Precio Vuelos latam \n");
	scanf("%d", &opcion);

	return opcion;
}

int ImprimirMenu(float km, float aerolineas, float vuelo, int fKm,
		int fAerolineas, int fvuelo)
{
	int opcion;

	if (fKm == 0)
	{
		printf("1. Ingresar Kilometros: (Km = x)\n");
	}
	else
	{
		printf("1. Ingresar Kilometros: (Km = %.2f)\n", km);
	}

	if (fAerolineas == 0 && fvuelo == 0)
	{
		printf("2. Ingresar Precio de Vuelos: (Aerolineas = y, Latam = z)\n");
	}
	else
	{
		if (fAerolineas == 0 && fvuelo == 1)
		{
			printf(
					"2. Ingresar Precio de Vuelos: (Aerolineas = y, Latam = %.2f)\n",
					vuelo);
		}
		else if (fAerolineas == 1 && fvuelo == 0)
		{
			printf(
					"2. Ingresar Precio de Vuelos: (Aerolineas = %.2f, Latam = z)\n",
					aerolineas);
		}
		else
		{

			printf(
					"2. Ingresar Precio de Vuelos: (Aerolineas = %.2f, Latam = %.2f)\n",
					aerolineas, vuelo);
		}
	}

	printf("-Precio vuelo Aerolineas: \n");
	printf("-Precio vuelo vuelo:\n");
	printf("\n");
	printf("3. Calcular todos los costos:\n");
	printf(" a) Tarjeta de debito (descuento 10porciento)\n");
	printf(" b) Tarjeta de crédito (interés 25porciento)\n");
	printf(" c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)\n");
	printf(" d) Mostrar precio por km (precio unitario)\n");
	printf(" e) Mostrar diferencia de precio ingresada (vuelo - Aerolíneas)\n");
	printf("\n");
	printf("4. Informar Resultados \n");
	printf("'“Latam:\n");
	printf(" a) Precio con tarjeta de débito: r\n");
	printf(" b) Precio con tarjeta de crédito: r\n");
	printf(" c) Precio pagando con bitcoin : r\n");
	printf(" d) Precio unitario: r\n");
	printf("\n");
	printf("Aerolíneas:\n");
	printf(" a) Precio con tarjeta de débito: r\n");
	printf(" b) Precio con tarjeta de crédito: r\n");
	printf(" c) Precio pagando con bitcoin : r\n");
	printf(" d) Precio unitario: r\n");
	printf("La diferencia de precio es : r “\n");
	printf("\n");
	printf("\n");
	printf("5. Carga forzada de datos\n");
	printf("6. Eliminar datos\n");
	printf("7. Salir\n");
	printf("\n");
	scanf("%d", &opcion);

	return opcion;
}

float IngresarFlotante(char mensaje[])
{
	float unFlotante;
	printf("%s", mensaje);
	scanf("%f", &unFlotante);
	return unFlotante;
}
