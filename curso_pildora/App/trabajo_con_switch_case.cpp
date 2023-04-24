#include <iostream>

using namespace std;

int main()
{
    int opcion; // Ambito en todo el bloque main {}

    cout << "Menú de opciones:" << endl;
    cout << "1. Mostrar mensaje" << endl;
    cout << "2. Calcular una suma" << endl;
    cout << "3. Salir del programa" << endl;
    cout << "Introduce la opción deseada (1, 2 ó 3)" << endl;

    cin >> opcion;

    switch (opcion)
    {

    case 1:
        cout << "Hola alumnos de C++" << endl;
        break;

    case 2:
        int a, b;
        cout << "Introduce dos números enteros: " << endl;
        cin >> a >> b;
        cout << "La suma de " << a << " y " << b << " es: " << (a + b);
        break;

    case 3:
        cout << "Saliendo del programa...";
        break;

    default:
        cout << "Opción no válidaa";
        break;
    }

    return 0; // No necesario
}