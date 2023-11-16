#include <iostream>
using namespace std;

// Crear varios tipos de pantalla con una sola funcion

void crearVentana(int ancho = 800, int alto = 600, string titulo = "Mi ventana", bool completa = false)
{
    cout << "Creando ventana: " << titulo << "\n"
         << "Ancho: " << ancho << "\n"
         << "Alto: " << alto << "\n"
         << "Pantalla completa: " << (completa ? "Si" : "No") << "\n\n";
}

int main()
{

    // crearVentana();

    // crearVentana(350, 125);

    // crearVentana(900, 750, "Ventana de menú");

    crearVentana(950, 800, "Ventana principal", true);
}
