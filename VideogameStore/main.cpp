//
// Created by lupia on 29/08/2025.
//

#include <iostream>
#include <iomanip>
#include "VideogameStore.h"

using std::cout;
using std::cin;
using std::fixed;
using std::setprecision;

void mostrarMenuPrincipal()
{
    cout << "===== GameStore - Menu Principal =====\n";
    cout << "1. Mostrar Catalogo de Juegos\n";
    cout << "2. Agregar juego al carrito\n";
    cout << "3. Ver resumen del carrito\n";
    cout << "4. Finalizar y pagar\n";
    cout << "5. Limpiar carrito\n";
    cout << "6. Cargar compra de demostracion\n";
    cout << "7. Salir\n";
    cout << "Seleccione una opcion: ";
}

int leerOpcionMenu()
{
    int opcion;
    cin >> opcion;
    while ((opcion < 1 || opcion > 6) && opcion != -1)
    {
        cout << "Opcion invalida. Intente de nuevo (1-7 para salir): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> opcion;
    }
    return opcion;
}

int main()
{
    int codigos[MAX_ITEMS_CARRITO] = {0};
    int cantidades[MAX_ITEMS_CARRITO] = {0};
    int cantidadJuegosRegistrados = 0;
    int opcion = 0;

    do
    {
        mostrarMenuPrincipal();
        opcion = leerOpcionMenu();

        switch (opcion)
        {
        case 1:
            {
                mostrarCatalogoJuegos();
                break;
            }
        case 2:
            {
                agregarJuegoAlCarrito(codigos, cantidades, cantidadJuegosRegistrados);
                break;
            }
        case 3:
            {
                if (cantidadJuegosRegistrados == 0)
                {
                    cout << "\nEl carrito esta vacio.\n\n";
                    break;
                }
                double subtotal = calcularSubtotalCarrito(codigos, cantidades, cantidadJuegosRegistrados);
                cout << fixed << setprecision(2);
                cout << "\nSubtotal del carrito: $" << subtotal << "\n\n";
                break;
            }
        case 4:
            {
                if (cantidadJuegosRegistrados == 0)
                {
                    cout << "\nEl carrito esta vacio. No se puede finalizar la compra.\n\n";
                    break;
                }
                double subtotal = calcularSubtotalCarrito(codigos, cantidades, cantidadJuegosRegistrados);
                int tipoCliente = leerTipoCliente();
                double porcentajeDescuento = obtenerPorcentajeDescuento(tipoCliente);
                double descuentosAdicionales = calcularDescuentosAdicionales(codigos, cantidades, cantidadJuegosRegistrados);
                double totalFinal = calcularTotalFinal(subtotal, porcentajeDescuento, descuentosAdicionales);
                cout << fixed << setprecision(2);
                mostrarResumenCompra(codigos, cantidades, cantidadJuegosRegistrados, subtotal, totalFinal);
                break;
            }
        case 5:
            {
                limpiarCarrito(cantidadJuegosRegistrados);
                break;
            }
        case 6:
            {
                cargarCompraDemo(codigos, cantidades, cantidadJuegosRegistrados);
                break;
            }
        case 7:
            {
                cout << "\nSaliendo del sistema. ¡Gracias por su visita!\n";
                break;
            }
        }
    } while (opcion != 7);

    return 0;
}
