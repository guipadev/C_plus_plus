/**
 * - En C++ un array es básicamente un puntero al primer elemento del array.
 * - El valor del nombre del array es la dirección en memoria del primer elemento del array.
 * - Cuando se usa el nombre del array sin ningún índice, se obtiene la dirección en memoria del primer elemento del array.
 * - Cuando un puntero apunta al mismo tipo de dato que los elementos de un array, en casi todos los escenarios, puedes usar el nombre del puntero y el nombre del array de manera intercambiable para realizar operaciones similares, especialmente en lo que respecta a la indexación y aritmética de punteros. Sin embargo, el "casi" indica que hay excepciones a esta regla.
 */

#include <iostream>
using namespace std;

int main()
{

    int cifras[] = {10, 20, 30};

    cout << cifras << endl;

    cout << *cifras << endl;

    int *ptr_cifras{cifras};

    cout << ptr_cifras << endl;

    cout << *ptr_cifras << endl;

    /*****************/

    int cifras2[] = {10, 20, 30};

    int *ptr_cifras2{cifras2};

    cout << ptr_cifras2[0] << endl;

    cout << *(ptr_cifras2) << endl;

    cout << ptr_cifras2[2] << endl;
}