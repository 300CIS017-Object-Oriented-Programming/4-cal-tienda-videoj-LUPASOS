#include "VideogameStore.h"

void mostrarCatalogoJuegos()
{
    cout << "\n Catalogo de Videojuegos \n";
    cout << "\n Categoria: Accion \n";
    cout << JUEGO_DOOM_ETERNAL << ". Doom Eternal (PS5) - $" << PRECIO_DOOM_ETERNAL << "\n";
    cout << JUEGO_CYBERPUNK_2077 << ". Cyberpunk 2077 (PC) - $" << PRECIO_CYBERPUNK_2077 << "\n";
    cout << JUEGO_RED_DEAD_REDEMPTION_2 << ". Red Dead Redemption 2 (Xbox) - $" << PRECIO_RED_DEAD_REDEMPTION_2 << "\n";

    cout << "\n Categoria: Aventura \n";
    cout << JUEGO_GOD_OF_WAR << ". God of War (PC) - $" << PRECIO_GOD_OF_WAR << "\n";
    cout << JUEGO_LAST_OF_US << ". The Last of Us (PS5) - $" << PRECIO_LAST_OF_US << "\n";
    cout << JUEGO_UNICHARTED_4 << ". Uncharted 4 (PS5) - $" << PRECIO_UNICHARTED_4 << "\n";

    cout << "\n Categoria: Deportes \n";
    cout << JUEGO_NHL_24 << ". FIFA 24 (PS5) - $" << PRECIO_NHL_24 << "\n";
    cout << JUEGO_NBA_2K24 << ". NBA 2K24 (Xbox) - $" << PRECIO_NBA_2K24 << "\n";
    cout << JUEGO_FC_24 << ". FC 24 (PC) - $" << PRECIO_FC_24 << "\n";

    cout << "\n Categoria: Estrategia \n";
    cout << JUEGO_CIVILIZATION_VI << ". Civilization VI (PC) - $" << PRECIO_CIVILIZATION_VI << "\n";
    cout << JUEGO_STAR_CRAFT_II << ". StarCraft II (PC) - $" << PRECIO_STAR_CRAFT_II << "\n";
    cout << JUEGO_AGE_OF_EMPIRES_IV << ". Age of Empires IV (PC) - $" << PRECIO_AGE_OF_EMPIRES_IV << "\n";
}

int leerCodigoJuego()
{
    int codigo;
    cout << "Ingrese el codigo del juego (101-412): ";
    cin >> codigo;
    while (codigo < 101 || codigo > 412)
    {
        cout << "Codigo invalido. Intente de nuevo (101-412): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> codigo;
    }
    return codigo;
}

int leerCantidadJuegos()
{
    int cantidad;
    cout << "Ingrese la cantidad (1-10): ";
    cin >> cantidad;
    while (cantidad < 1 || cantidad > 10)
    {
        cout << "Cantidad invalida. Intente de nuevo (1-10): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> cantidad;
    }
    return cantidad;
}

string obtenerNombreJuego(int codigoJuego)
{
    switch (codigoJuego)
    {   case JUEGO_DOOM_ETERNAL: return "Doom Eternal";
        case JUEGO_GOD_OF_WAR: return "God of War";
        case JUEGO_NHL_24: return "FIFA 24";
        case JUEGO_CIVILIZATION_VI: return "Civilization VI";
        case JUEGO_CYBERPUNK_2077: return "Cyberpunk 2077";
        case JUEGO_LAST_OF_US: return "The Last of Us";
        case JUEGO_NBA_2K24: return "NBA 2K24";
        case JUEGO_STAR_CRAFT_II: return "StarCraft II";
        case JUEGO_RED_DEAD_REDEMPTION_2: return "Red Dead Redemption 2";
        case JUEGO_UNICHARTED_4: return "Uncharted 4";
        case JUEGO_FC_24: return "FC 24";
        case JUEGO_AGE_OF_EMPIRES_IV: return "Age of Empires IV";
        default: return "Desconocido";}
}

double obtenerPrecioJuego(int codigoJuego)
{
    switch (codigoJuego)
    {   case JUEGO_DOOM_ETERNAL: return PRECIO_DOOM_ETERNAL;
        case JUEGO_GOD_OF_WAR: return PRECIO_GOD_OF_WAR;
        case JUEGO_NHL_24: return PRECIO_NHL_24;
        case JUEGO_CIVILIZATION_VI: return PRECIO_CIVILIZATION_VI;
        case JUEGO_CYBERPUNK_2077: return PRECIO_CYBERPUNK_2077;
        case JUEGO_LAST_OF_US: return PRECIO_LAST_OF_US;
        case JUEGO_NBA_2K24: return PRECIO_NBA_2K24;
        case JUEGO_STAR_CRAFT_II: return PRECIO_STAR_CRAFT_II;
        case JUEGO_RED_DEAD_REDEMPTION_2: return PRECIO_RED_DEAD_REDEMPTION_2;
        case JUEGO_UNICHARTED_4: return PRECIO_UNICHARTED_4;
        case JUEGO_FC_24: return PRECIO_FC_24;
        case JUEGO_AGE_OF_EMPIRES_IV: return PRECIO_AGE_OF_EMPIRES_IV;
        default: return 0.0;}
}

string obtenerPlataforma(int codigoJuego)
{
    switch (codigoJuego)
    {   case JUEGO_DOOM_ETERNAL: return "PS5";
        case JUEGO_GOD_OF_WAR: return "PC";
        case JUEGO_NHL_24: return "PS5";
        case JUEGO_CIVILIZATION_VI: return "PC";
        case JUEGO_CYBERPUNK_2077: return "PC";
        case JUEGO_LAST_OF_US: return "PS5";
        case JUEGO_NBA_2K24: return "Xbox";
        case JUEGO_STAR_CRAFT_II: return "PC";
        case JUEGO_RED_DEAD_REDEMPTION_2: return "Xbox";
        case JUEGO_UNICHARTED_4: return "PS5";
        case JUEGO_FC_24: return "PC";
        case JUEGO_AGE_OF_EMPIRES_IV: return "PC";
        default: return "Desconocida";}
}

string obtenerCategoria(int codigoJuego)
{
    switch (codigoJuego)
    {   case JUEGO_DOOM_ETERNAL: return "Accion";
        case JUEGO_GOD_OF_WAR: return "Aventura";
        case JUEGO_NHL_24: return "Deportes";
        case JUEGO_CIVILIZATION_VI: return "Estrategia";
        case JUEGO_CYBERPUNK_2077: return "Accion";
        case JUEGO_LAST_OF_US: return "Aventura";
        case JUEGO_NBA_2K24: return "Deportes";
        case JUEGO_STAR_CRAFT_II: return "Estrategia";
        case JUEGO_RED_DEAD_REDEMPTION_2: return "Accion";
        case JUEGO_UNICHARTED_4: return "Aventura";
        case JUEGO_FC_24: return "Deportes";
        case JUEGO_AGE_OF_EMPIRES_IV: return "Estrategia";
        default: return "Desconocida";}
}

void agregarJuegoAlCarrito(int codigos[], int cantidades[], int& cantidadJuegosRegistrados)
{
    if (cantidadJuegosRegistrados >= MAX_ITEMS_CARRITO)
    {
        cout << "El carrito esta lleno. No se pueden agregar mas juegos.\n";
        return;
    }
    mostrarCatalogoJuegos();
    int codigo = leerCodigoJuego();
    int cantidad = leerCantidadJuegos();

    for (int i = 0; i < cantidadJuegosRegistrados; i++)
    {
        if (codigos[i] == codigo)
        {
            cantidades[i] += cantidad;
            cout << "\nSe ha actualizado la cantidad de " << obtenerNombreJuego(codigo) << " en el carrito.\n\n";
            return;
        }
    }

    codigos[cantidadJuegosRegistrados] = codigo;
    cantidades[cantidadJuegosRegistrados] = cantidad;
    cantidadJuegosRegistrados++;
    cout << "\nJuego agregado: " << obtenerNombreJuego(codigo) << " x" << cantidad << "\n\n";
}

double calcularSubtotalCarrito(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados)
{
    double subtotal = 0.0;
    for (int i = 0; i < cantidadJuegosRegistrados; i++)
    {
        subtotal += obtenerPrecioJuego(codigos[i]) * cantidades[i];
    }
    return subtotal;
}

int leerTipoCliente()
{
    int tipo;
    cout << "\nIngrese su tipo de cliente:\n";
    cout << "1. Miembro Oro (15% de descuento)\n";
    cout << "2. Miembro Plata (8% de descuento)\n";
    cout << "3. Cliente Regular (0% de descuento)\n";
    cout << "Seleccione una opcion: ";
    cin >> tipo;
    while (tipo < 1 || tipo > 3)
    {
        cout << "Opcion invalida. Intente de nuevo (1-3): ";
        cin.clear();
        cin.ignore(10000, '\n');
        cin >> tipo;
    }
    return tipo;
}

double obtenerPorcentajeDescuento(int tipoCliente)
{
    if (tipoCliente == 1)
    {
        return DESCUENTO_ORO;
    }
    if (tipoCliente == 2)
    {
        return DESCUENTO_PLATA;
    }
    return DESCUENTO_REGULAR;
}

double calcularDescuentosAdicionales(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados)
{
    double descuentoAdicional = 0.0;
    for (int i = 0; i < cantidadJuegosRegistrados; i++)
    {
        string plataforma = obtenerPlataforma(codigos[i]);
        string categoria = obtenerCategoria(codigos[i]);
        double precioJuego = obtenerPrecioJuego(codigos[i]);

        if (plataforma == "PS5")
        {
            descuentoAdicional += precioJuego * cantidades[i] * DESCUENTO_ADICIONAL_PS5;
        }
        if (categoria == "Accion")
        {
            descuentoAdicional += precioJuego * cantidades[i] * DESCUENTO_ADICIONAL_ACCION;
        }
    }
    return descuentoAdicional;
}

double calcularTotalFinal(double subtotal, double porcentajeDescuento, double descuentosAdicionales)
{
    return subtotal - (subtotal * porcentajeDescuento) - descuentosAdicionales;
}

void mostrarResumenCompra(const int codigos[], const int cantidades[], int cantidadJuegosRegistrados, double subtotal, double total)
{
    cout << "\n===== Resumen de la Compra =====\n";
    for (int i = 0; i < cantidadJuegosRegistrados; i++)
    {
        string nombre = obtenerNombreJuego(codigos[i]);
        double precio = obtenerPrecioJuego(codigos[i]);
        double parcial = precio * cantidades[i];
        cout << "- " << nombre << " x" << cantidades[i] << " = $" << parcial << "\n";
    }
    cout << "---------------------------------\n";
    cout << "Subtotal: $" << subtotal << "\n";
    cout << "Total a pagar: $" << total << "\n\n";
}


//Profe la verdad gran parte del codigo me ayudo la IA, ando perdido
void cargarCompraDemo(int codigos[], int cantidades[], int& cantidadJuegosRegistrados)
{
    limpiarCarrito(cantidadJuegosRegistrados);
    codigos[0] = JUEGO_DOOM_ETERNAL;
    cantidades[0] = 1;
    codigos[1] = JUEGO_LAST_OF_US;
    cantidades[1] = 2;
    codigos[2] = JUEGO_CIVILIZATION_VI;
    cantidades[2] = 1;
    cantidadJuegosRegistrados = 3;
    cout << "\nSe ha cargado una compra de demostracion:\n";
    cout << "- 1 x Doom Eternal\n";
    cout << "- 2 x The Last of Us\n";
    cout << "- 1 x Civilization VI\n\n";
}

void limpiarCarrito(int& cantidadJuegosRegistrados)
{
    cantidadJuegosRegistrados = 0;
    cout << "\nEl carrito ha sido limpiado.\n\n";
}
