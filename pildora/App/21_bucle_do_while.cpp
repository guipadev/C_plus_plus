/**
- Utilizado cuando necesitas realizar una operación de un número indeterminado de veces y
la condición de parada de algún cálculo o entrada del usuario que ocurre dentro del bucle.

- Pero además necesitas que el cuerpo del bucle se ejecute al menos una vez.

- Sintaxis:

do {
    // cuerpo del bucle
} while (condición a evaluar);
*/

#include <iostream>

using namespace std;

int main()
{

    int opcion;

    do
    {

        cout << "Menú de opciones:\n";

        cout << "1. Opción 1\n";

        cout << "2. Opción 2\n";

        cout << "3. Salir\n";

        cin >> opcion;

        if (opcion != 3)
            cout << "Has elegido la opción " << opcion << ".\n";

    } while (opcion != 3);

    cout << "has elegido salir";
}