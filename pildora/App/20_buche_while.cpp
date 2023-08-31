/**
 * BUCLE WHILE
 *
 * Utilizado cuando necesitas realizar una operación un número indeterminado de veces
 * y la condición de parada depende de algún cálculo o entrada del usuarios que ocurre
 * dentro del bucle
 *
 * Sintaxis:
 *
 * while ( condición a evaluar ) { cuerpo }
 */

#include <iostream>

using namespace std;

int main()
{

    int i{1};

    while (i <= 10)
    {

        if (i % 2 == 0)
        {

            cout << i << " es par" << endl;
        }

        i++;
    }

    /**
     * Ejercicio de bucle indeterminado
     * Introducir números por consola y termine al ingresar un 0
     * Y todos los números introducidos deben sumarse
     */

    int num, suma = 0;

    cout << "Introduce un número (0 para salir): ";

    cin >> num;

    while (num != 0)
    {

        suma += num;

        cout << "Introduce un número (0 para salir): ";

        cin >> num;
    }

    cout << "La suma total es: " << suma << endl;
}