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
	double dMax = 9999999999999;
	//Precios
	double km, aerolineas, latam, bitCoinPrecio;
	float pDebitoLatam, pCreditoLatam, pBitCoinLatam, pKilometroLatam,
			pdebitoAerolineas, pCreditoAerolineas, pBitCoinAerolineas,
			pKilometroAerolineas;
	//Flag
	int fAerolineas = 0, fLatam = 0, fKm = 0, fBitCoin = 0, fPreciosCalculados =
			0;

	do
	{

		switch (ImprimirMenu(km, aerolineas, latam, fKm, fAerolineas, fLatam))
		{
		case 1:

			km = IngresarDouble("Ingresar kilometros: ", 0, dMax);
			fKm = 1;
			break;
		case 2:

			switch (ImprimirMenuPrecioVuelos())
			{
			case 1:
				aerolineas = IngresarDouble("Increaser precio Aerolineas: ", 0,
						dMax);
				fAerolineas = 1;
				break;
			case 2:
				latam = IngresarDouble("Ingresar precio Latam: ", 0, dMax);
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
				fPreciosCalculados = 1;
				printf(
						"Se calcularon con exito los precios de Aerolineas... \n");
				system("pause");

			}
			else if (fLatam == 1 && fKm == 1 && fAerolineas == 0)
			{

				pDebitoLatam = CalcularDescuentoTarjetaDebito(latam, km);
				pCreditoLatam = CalcularInteresTarjetaCredito(latam, km);
				pBitCoinLatam = CalcularPrecioBitCoin(latam, bitCoinPrecio);
				pKilometroLatam = CalcularPrecioPorKilometro(latam, km);
				fPreciosCalculados = 1;
				printf("Se calcularon con exito los precios de Latam... \n");
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
				fPreciosCalculados = 1;
				printf(
						"Se calcularon con exito los precios de Aerolineas y Latam... \n \n");
				system("pause");
			}
			else
			{
				printf("\n\nFaltan ingresar datos.\n");
				system("pause");
			}

			break;
		case 4:
			if (fAerolineas == 1 && fKm == 1 && fLatam == 0
					&& fPreciosCalculados == 1)
			{
				ImprimirResultadosAerolineas(pdebitoAerolineas,
						pCreditoAerolineas, fBitCoin, pBitCoinAerolineas,
						pKilometroAerolineas);
				system("pause");
			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 0
					&& fPreciosCalculados == 1)
			{
				ImprimirResultadosLatam(pDebitoLatam, pCreditoLatam, fBitCoin,
						pBitCoinLatam, pKilometroLatam);
				system("pause");
			}
			else if (fKm == 1 && fLatam == 1 && fAerolineas == 1
					&& fPreciosCalculados == 1)
			{
				ImprimirResultadosAerolineas(pdebitoAerolineas,
						pCreditoAerolineas, fBitCoin, pBitCoinAerolineas,
						pKilometroAerolineas);
				ImprimirResultadosLatam(pDebitoLatam, pCreditoLatam, fBitCoin,
						pBitCoinLatam, pKilometroLatam);
				printf("La diferencia entre precios es: %.2lf \n",
						DiferenciaDePrecios(aerolineas, latam));
				system("pause");
			}

			else
			{
				printf("\n\nNo se realizaron los calculos...\n");
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
				fBitCoin = 0;
				fPreciosCalculados = 0;
				printf("Eliminando datos...\n");
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
