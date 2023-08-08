#include <iostream>
#include <vector>

using namespace std;

/*
BREAK
se utiliza para terminarl el bucle inmediatamente, sin importar la condición de bucle.
Una vez que se ejecuta la instrucción break, el flujo de ejecución del programa se traslada a la siguiente declaración después del bucle.
Es particularmente útil cuando se desea salir de un bucle debido a una condición específica distinta de la condición de bucle.

for (int i=0; i < 10; i++) {
    if (i == 5) {
        break;
    }
    count << i << endl;
}

CONTINUE
Se utiliza para saltarse el resto de la iteración actual y pasar a la siguiente iteración del bucle.
Lo que hace es 'continuar' con la siguiente iteración del bucle.

for (int i=0; i < 10; i++) {
    if (i == 5) {
        continue;
    }
    count << i << endl;
}

*/

int main()
{

    vector<string> nombres = {"Maria", "Carlos", "Pedro", "Ana", "Juan", "Luisa"};

    string persona_buscada = "Mario";

    for (int i = 0; i < nombres.size(); i++)
    {

        if (nombres[i] == persona_buscada)
        {

            cout << "Persona encontrada. Nombre: " << persona_buscada << " encontrada en la posición: " << i << endl;

            // Si tuvieramos 10M registros pero la busqueda esta en la 2da ubicación, a pesar
            // de encontrarlo, seguiria iterando. Con el break al encontrar omitiria seguir iterando.
            break;
        }
    }

    cout << "Hemos salido del bucle\n";

    /************************************************************/

    vector<double> precios = {1000000, 250000, 320000, 10000, 1500000, 3000000, 9000, 8000};

    double descuento = 0.15;

    for (double j = 0; j < precios.size(); j++)
    {

        if (precios[j] <= 10000)
        {
            // Tenemos un listado de productos y queremos colocarle un descuento del 10% a todos
            // excepto al producto que cuesta 10K, a los demas si aplica. Con el continue omitiria
            // este producto y a los demas le aplicaria el descuento.
            continue;
        }
        precios[j] -= precios[j] * descuento;
    }

    for (int k = 0; k < precios.size(); k++)
    {
        cout << "Precio final del producto: " << (k + 1) << ": " << precios[k] << " €" << endl;
    }
}