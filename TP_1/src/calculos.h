/*
 * calculos.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Mati
 */

#ifndef CALCULOS_H_
#define CALCULOS_H_

/// @fn double DiferenciaDePrecios(double, double)
/// @brief Diferencia entre dos numeros de forma positiva
///
/// @param aerolineas
/// @param latam
/// @return devuelve la diferencia
double DiferenciaDePrecios(double aerolineas, double latam);

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


#endif /* CALCULOS_H_ */
