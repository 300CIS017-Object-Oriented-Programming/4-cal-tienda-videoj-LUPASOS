//
// Created by lupia on 29/08/2025.
//

#ifndef VIDEOGAMESTORE_H
#define VIDEOGAMESTORE_H

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// --- Constantes de productos (ejemplos) ---
const int JUEGO_DOOM_ETERNAL = 1;
const int JUEGO_GOD_OF_WAR = 2;
const int JUEGO_FIFA_24 = 3;
const int JUEGO_CIVILIZATION_VI = 4;
const int JUEGO_CYBERPUNK_2077 = 5;
const int JUEGO_LAST_OF_US = 6;
const int JUEGO_NBA_2K24 = 7;
const int JUEGO_STAR_CRAFT_II = 8;
const int JUEGO_RED_DEAD_REDEMPTION_2 = 9;
const int JUEGO_UNICHARTED_4 = 10;
const int JUEGO_FC_24 = 11;
const int JUEGO_AGE_OF_EMPIRES_IV = 12;

const double PRECIO_DOOM_ETERNAL = 60.00;
const double PRECIO_GOD_OF_WAR = 50.00;
const double PRECIO_FIFA_24 = 70.00;
const double PRECIO_CIVILIZATION_VI = 30.00;
const double PRECIO_CYBERPUNK_2077 = 55.00;
const double PRECIO_LAST_OF_US = 45.00;
const double PRECIO_NBA_2K24 = 70.00;
const double PRECIO_STAR_CRAFT_II = 20.00;
const double PRECIO_RED_DEAD_REDEMPTION_2 = 40.00;
const double PRECIO_UNICHARTED_4 = 25.00;
const double PRECIO_FC_24 = 70.00;
const double PRECIO_AGE_OF_EMPIRES_IV = 40.00;


// --- Descuentos (% expresado de 0.0 a 1.0) ---
const double DESCUENTO_ORO = 0.15;
const double DESCUENTO_PLATA = 0.08;
const double DESCUENTO_REGULAR = 0.00;

// --- Descuentos Adicionales ---
const double DESCUENTO_ADICIONAL_PS5 = 0.05; // 5% de descuento adicional
const double DESCUENTO_ADICIONAL_ACCION = 0.03; // 3% de descuento adicional

// --- Misceláneos ---
const int MAX_ITEMS_CARRITO = 50;

// --- Declaraciones de funciones ---

/**
 * @brief Muestra el catálogo de juegos disponibles.
 */
void mostrarCatalogoJuegos();

/**
 * @brief Lee el código del juego ingresado por el usuario.
 * @return Código del juego seleccionado.
 */
int leerCodigoJuego();

/**
 * @brief Lee la cantidad de juegos ingresada por el usuario.
 * @return Cantidad del juego seleccionado.
 */
int leerCantidadJuegos();

/**
 * @brief Obtiene el nombre de un juego dado su código.
 * @param codigoJuego Código del juego.
 * @return Nombre del juego.
 */
string obtenerNombreJuego(int codigoJuego);

/**
 * @brief Obtiene el precio de un juego dado su código.
 * @param codigoJuego Código del juego.
 * @return Precio del juego.
 */
double obtenerPrecioJuego(int codigoJuego);

/**
 * @brief Obtiene la plataforma de un juego dado su código.
 * @param codigoJuego Código del juego.
 * @return Plataforma del juego.
 */
string obtenerPlataforma(int codigoJuego);

/**
 * @brief Obtiene la categoría de un juego dado su código.
 * @param codigoJuego Código del juego.
 * @return Categoría del juego.
 */
string obtenerCategoria(int codigoJuego);

/**
 * @brief Agrega un juego al carrito de compras.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo de cantidades de juegos en el carrito.
 * @param cantidadJuegosRegistrados Referencia al número de juegos registrados en el carrito.
 */
void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);

/**
 * @brief Calcula el subtotal del carrito sin descuentos.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo de cantidades de juegos en el carrito.
 * @param cantidadJuegosRegistrados Número de juegos registrados en el carrito.
 * @return Subtotal del carrito.
 */
double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);

/**
 * @brief Lee el tipo de cliente.
 * @return Tipo de cliente (Oro, Plata, Regular).
 */
int leerTipoCliente();

/**
 * @brief Obtiene el porcentaje de descuento del cliente.
 * @param tipoCliente Tipo de cliente.
 * @return Porcentaje de descuento.
 */
double obtenerPorcentajeDescuento(int tipoCliente);

/**
 * @brief Calcula descuentos adicionales por plataforma o categoría.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo de cantidades de juegos en el carrito.
 * @param cantidadJuegosRegistrados Número de juegos registrados en el carrito.
 * @return Monto total del descuento adicional.
 */
double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados);

/**
 * @brief Calcula el total final a pagar después de todos los descuentos.
 * @param subtotal Subtotal del pedido.
 * @param porcentajeDescuento Porcentaje de descuento del cliente.
 * @param descuentosAdicionales Descuento adicional calculado.
 * @return Total final a pagar.
 */
double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales);

/**
 * @brief Muestra un resumen de la compra.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo de cantidades de juegos en el carrito.
 * @param cantidadJuegosRegistrados Número de juegos registrados en el carrito.
 * @param subtotal Subtotal del carrito.
 * @param total Total final del carrito.
 */
void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double subtotal, double total);

/**
 * @brief Carga una compra de demostración en el carrito.
 * @param codigos Arreglo de códigos de juegos en el carrito.
 * @param cantidades Arreglo de cantidades de juegos en el carrito.
 * @param cantidadJuegosRegistrados Referencia al número de juegos registrados.
 */
void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados);

/**
 * @brief Limpia todos los juegos del carrito.
 * @param cantidadJuegosRegistrados Referencia al número de juegos registrados.
 */
void limpiarCarrito(int& cantidadJuegosRegistrados);

#endif //VIDEOGAMESTORE_H
//
// Created by lupia on 29/08/2025.
//

#ifndef VIDEOGAMESTORE_VIDEOGAMESTORE_H
#define VIDEOGAMESTORE_VIDEOGAMESTORE_H


class VideogameStore {
};


#endif //VIDEOGAMESTORE_VIDEOGAMESTORE_H