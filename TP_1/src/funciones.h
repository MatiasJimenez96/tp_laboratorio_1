/*
 * funciones.h
 *
 *  Created on: 6 abr. 2022
 *      Author: Mati
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


int verificarIngresoDeDatos(int fAerolineas, int fLatam, int fKm, int fbitCoin);
float CalcularPrecioBitCoin(float latam, float bitCoinPrecio);
float CalcularPrecioPorKilometro(float lata, float km);
float CalcularInteresTarjetaCredito(float latam, float  km);
float CalcularDescuentoTarjetaDebito(float latam, float km);
void ImprimirExitoAlCalcular();
void ImprimirCasoIncorrecto();
char menuSalida();
int ImprimirMenuPrecioVuelos();
int ImprimirMenu(float km, float aerolineas, float latam, int fKm,
		int fAerolineas, int fLatam);

float IngresarFlotante(char mensaje[]);

#endif /* FUNCIONES_H_ */
