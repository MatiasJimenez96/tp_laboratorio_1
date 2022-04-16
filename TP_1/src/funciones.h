/*
 * funciones.h
 *
 *  Created on: 6 abr. 2022
 *      Author: Mati
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/// @fn double DiferenciaDePrecios(double, double)
/// @brief Diferencia entre dos numeros de forma positiva
///
/// @param aerolineas
/// @param latam
/// @return devuelve la diferencia
double DiferenciaDePrecios(double aerolineas, double latam);

/// @fn void ImprimirResultadosLatam(double, double, int, double, double)
/// @brief Imprime los resultados Latam en pantalla
///
/// @param pDebitoLatam
/// @param pCreditoLatam
/// @param fBitCoin
/// @param pBitCoinLatam
/// @param pKilometroLatam
void ImprimirResultadosLatam(double pDebitoLatam, double pCreditoLatam,
		int fBitCoin, double pBitCoinLatam, double pKilometroLatam);

/// @fn void ImprimirResultadosAerolineas(double, double, int, double, double)
/// @brief Imprime los resultados de Aerolineas en pantalla
///
/// @param pdebitoAerolineas
/// @param pCreditoAerolineas
/// @param fBitCoin
/// @param pBitCoinAerolineas
/// @param pKilometroAerolineas
void ImprimirResultadosAerolineas(double pdebitoAerolineas,
		double pCreditoAerolineas, int fBitCoin, double pBitCoinAerolineas,
		double pKilometroAerolineas);

/// @fn int verificarIngresoDeDatos(int, int, int, int)
/// @brief verifica si todos los datos fueron ingresados segun las banderas
///
/// @param fAerolineas
/// @param fLatam
/// @param fKm
/// @param fbitCoin
/// @return Devuelve 1 si los datos fueron ingresados
int verificarIngresoDeDatos(int fAerolineas, int fLatam, int fKm, int fbitCoin);

/// @fn double CalcularPrecioBitCoin(double, double)
/// @brief Calcula los precios pagando con 1bitCoin
///
/// @param precio
/// @param bitCoinPrecio
/// @return devuelve el precio
double CalcularPrecioBitCoin(double precio, double bitCoinPrecio);

/// @fn double CalcularPrecioPorKilometro(double, double)
/// @brief Calcula los precios por kilometros
///
/// @param precio
/// @param km
/// @return devuelve el precio
double CalcularPrecioPorKilometro(double precio, double km);

/// @fn double CalcularInteresTarjetaCredito(double, double)
/// @brief suma interes
///
/// @param precio
/// @param interes
/// @return devuelve la suma
double CalcularInteresTarjetaCredito(double precio, float interes);

/// @fn double CalcularDescuentoTarjetaDebito(double, float)
/// @brief hace un descuento
///
/// @param precio
/// @param interes
/// @return Devuelve el descuento
double CalcularDescuentoTarjetaDebito(double precio, float interes);


/// @fn void ImprimirExitoAlCalcular()
/// @brief Imprime mensaje de exito
///
void ImprimirExitoAlCalcular();

/// @fn void ImprimirCasoIncorrecto()
/// @brief Imprime mensaje de caso incorrecto
///
void ImprimirCasoIncorrecto();

/// @fn char menuSalida()
/// @brief Imprime menu de salida con sus opciones
///
/// @return devuelve S o N segun elija el usuario
char menuSalida();

/// @fn int ImprimirMenuPrecioVuelos()
/// @brief Imprime menu de precio de los vuelos
///
/// @returndevuelve un numero no validado
int ImprimirMenuPrecioVuelos();

/// @fn int ImprimirMenu(double, double, double, int, int, int)
/// @brief imprime menu principal en pantalla
///
/// @param km
/// @param aerolineas
/// @param latam
/// @param fKm
/// @param fAerolineas
/// @param fLatam
/// @return Devuelve un int no validado
int ImprimirMenu(double km, double aerolineas, double latam, int fKm,
		int fAerolineas, int fLatam);

/// @fn double IngresarDouble(char[], int, double)
/// @brief pide un numero  y lo devuelve
///
/// @param mensaje
/// @param minimo
/// @param maximo
/// @return Devuelve el numero validado
double IngresarDouble(char mensaje[], int minimo, double maximo);

/// @fn float IngresarFlotante(char[])
/// @brief pide un flotante
///
/// @param mensaje
/// @return retorna el numero
float IngresarFlotante(char mensaje[]);


#endif /* FUNCIONES_H_ */
