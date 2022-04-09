/*
 ============================================================================
 Name        : TP_1.c
 Author      : Matias Jimenez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"

int main(void)
{
	setbuf(stdout, NULL);

	char salida = 'n';
	char salidax = 'n';
	//Precios
	float aerolineas, latam, km, bitCoinPrecio;
	float pDebitoLatam, pCreditoLatam, pBitCoinLatam, pKilometroLatam,
			pdebitoAerolineas, pCreditoAerolineas, pBitCoinAerolineas,
			pKilometroAerolineas;
	//Flag
	int fAerolineas = 0, fLatam = 0, fKm = 0, fBitCoin = 0;

	do
	{

		switch (ImprimirMenu(km, aerolineas, latam, fKm, fAerolineas, fLatam))
		{
		case 1:
			km = IngresarFlotante("Ingresar kilometros: \n");
			fKm = 1;
			break;
		case 2:

			switch (ImprimirMenuPrecioVuelos())
			{
			case 1:
				aerolineas = IngresarFlotante("Increaser precio Aerolineas: ");
				fAerolineas = 1;
				break;
			case 2:
				latam = IngresarFlotante("Ingresar precio Latam: ");
				fLatam = 1;
				break;

			default:
				ImprimirCasoIncorrecto();
				break;
			}

			break;
		case 3:
			if (fAerolineas == 1 && fKm == 1 && fLatam == 0)
			{
				pdebitoAerolineas = CalcularDescuentoTarjetaDebito(aerolineas,
						km);
				pCreditoAerolineas = CalcularInteresTarjetaCredito(aerolineas,
						km);
				pBitCoinAerolineas = CalcularPrecioBitCoin(aerolineas,
						bitCoinPrecio);
				pKilometroAerolineas = CalcularPrecioPorKilometro(aerolineas,
						km);
				printf(
						"Se calcularon con exito los precios de Aerolineas... ");
				system("pause");

			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 0)
			{

				pDebitoLatam = CalcularDescuentoTarjetaDebito(latam, km);
				pCreditoLatam = CalcularInteresTarjetaCredito(latam, km);
				pBitCoinLatam = CalcularPrecioBitCoin(latam, bitCoinPrecio);
				pKilometroLatam = CalcularPrecioPorKilometro(latam, km);
				printf("Se calcularon con exito los precios de Latam... ");
				system("pause");
			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 1)
			{
				pdebitoAerolineas = CalcularDescuentoTarjetaDebito(aerolineas,
						km);
				pCreditoAerolineas = CalcularInteresTarjetaCredito(aerolineas,
						km);
				pBitCoinAerolineas = CalcularPrecioBitCoin(aerolineas,
						bitCoinPrecio);
				pKilometroAerolineas = CalcularPrecioPorKilometro(aerolineas,
						km);

				pDebitoLatam = CalcularDescuentoTarjetaDebito(latam, km);
				pCreditoLatam = CalcularInteresTarjetaCredito(latam, km);
				pBitCoinLatam = CalcularPrecioBitCoin(latam, bitCoinPrecio);
				pKilometroLatam = CalcularPrecioPorKilometro(latam, km);
				printf(
						"Se calcularon con exito los precios de Aerolineas y Latam... ");
				system("pause");
			}
			else
			{
				printf("\n\nFaltan ingresar datos.\n");
				system("pause");
			}

			break;
		case 4:
			if (fAerolineas == 1 && fKm == 1 && fLatam == 0)
			{
				printf("***** RESULTADOS AEROLINEAS *****\n\n");
				printf(" Tarjeta debito: %.2f \n\n ", pdebitoAerolineas);
				printf(" Tarjeta de crédito %.2f \n\n", pCreditoAerolineas);

				if (fBitCoin == 1)
				{
					printf(" Bitcoin: %.2f \n\n", pBitCoinAerolineas);

				}
				printf(" Precio unitario: %.2f \n\n", pKilometroAerolineas);
			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 0)
			{
				printf("\n\n ***** RESULTADOS LATAM *****");
				printf("\n\n Tarjeta debito:  %.2f", pDebitoLatam);
				printf("\n\n Tarjeta de crédito %.2f", pCreditoLatam);
				if (fBitCoin == 1)
				{
					printf("\n\n Bitcoin: %.8f ", pBitCoinLatam);

				}

				printf("\n\n Precio unitario: %.2f \n\n", pKilometroLatam);
			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 1)
			{
				printf("***** RESULTADOS AEROLINEAS *****\n\n");
				printf(" Tarjeta debito: %.2f \n\n ", pdebitoAerolineas);
				printf(" Tarjeta de crédito %.2f \n\n", pCreditoAerolineas);
				if (fBitCoin == 1)
				{
					printf(" Bitcoin: %.2f \n\n", pBitCoinAerolineas);

				}
				printf(" Precio unitario: %.2f \n\n", pKilometroAerolineas);
				printf(" Precio unitario: %.2f \n\n", pKilometroAerolineas);

				printf("\n\n ***** RESULTADOS LATAM *****");
				printf("\n\n Tarjeta debito:  %.2f", pDebitoLatam);
				printf("\n\n Tarjeta de crédito %.2f", pCreditoLatam);
				{
					printf("\n\n Bitcoin: %.8f ", pBitCoinLatam);

				}
				printf("\n\n Precio unitario: %.2f \n\n", pKilometroLatam);
			}

			else
			{
				printf("\n\nFaltan ingresar datos.\n");
				system("pause");
			}

			break;
		case 5:
			bitCoinPrecio = 4756649.96;
			fBitCoin = 1;
			km = 7090;
			fKm = 1;
			aerolineas = 162965;
			fAerolineas = 1;
			latam = 159339;
			fLatam = 1;

			printf("Datos cargados con exito...\n");
			system("pause");

			break;
		case 6: // Eliminar datos
			printf("Seguro quiere eliminar datos? 's'  o 'n'");
			fflush(stdin);
			scanf("%c", &salidax);
			salidax = tolower(salidax);
			while (salidax != 's' && salidax != 'n')
			{
				printf("Opcion incorrecta, reintentar: ");
				fflush(stdin);
				scanf("%c", &salidax);
				salidax = tolower(salidax);
			}
			if (salidax == 's')
			{
				fAerolineas = 0;
				fLatam = 0;
				fKm = 0;
				//fBitCoin = 0;
				printf("Eliminando datos...");
				system("pause");
			}
			break;
		case 7: // imprimo menu de salida y me devuelve una opcion
			salida = menuSalida();
			break;
		default: // Opcion incorrecta del menu Principal
			ImprimirCasoIncorrecto();
			break;
		}

	} while (salida == 'n');

	return EXIT_SUCCESS;
}
