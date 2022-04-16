/*
 * funciones.h
 *
 *  Created on: 6 abr. 2022
 *      Author: Mati
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
double DiferenciaDePrecios(double aerolineas, double latam);
void ImprimirResultadosLatam(double pDebitoLatam, double pCreditoLatam,
		int fBitCoin, double pBitCoinLatam, double pKilometroLatam);
void ImprimirResultadosAerolineas(double pdebitoAerolineas,
		double pCreditoAerolineas, int fBitCoin, double pBitCoinAerolineas,
		double pKilometroAerolineas);

int verificarIngresoDeDatos(int fAerolineas, int fLatam, int fKm, int fbitCoin);
double CalcularPrecioBitCoin(double latam, double bitCoinPrecio);
double CalcularPrecioPorKilometro(double lata, double km);
double CalcularInteresTarjetaCredito(double latam, double km);
double CalcularDescuentoTarjetaDebito(double latam, double km);
void ImprimirExitoAlCalcular();
void ImprimirCasoIncorrecto();
char menuSalida();
int ImprimirMenuPrecioVuelos();
int ImprimirMenu(double km, double aerolineas, double latam, int fKm,
		int fAerolineas, int fLatam);

double IngresarDouble(char mensaje[], int minimo, double maximo);
float IngresarFlotante(char mensaje[]);

#endif /* FUNCIONES_H_ */
