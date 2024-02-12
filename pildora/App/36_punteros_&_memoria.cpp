#include <iostream>
using namespace std;

/**
 * Memoria conformada por:
 * - Segmento de código/texto
 * - Segmente de datos
 * - Stack (pila)
 * Todo lo que sea local que durante la ejecución del programa se crea y destruye, como variables locales, parámetros de una función, variables dentro de una función,
 * llamadas a una función, punteros, todo se almacena en el Stack.
 * - Heap (montón)
 */

int main()
{

    // forma errada de declarar puntero
    // int * int_ptr;

    // Si no tiene  valor poner en null
    int *int_ptr{nullptr};

    // Asignación espacio de memoria en el Heap(montón)
    int_ptr = new int;

    // Imprime la dirección que apunta el puntero, dirección de memoria del heap
    cout << int_ptr << endl;

    // Imprimir dirección del memoria del puntero
    cout << &int_ptr << endl;

    // Asigno puntero en espacio de memoria del heap
    int *int_puntero = new int;

    *int_puntero = 10;

    cout << "Valor antes del delete: " << *int_puntero << endl;

    // Liberando memoria del heap, espacio
    delete int_puntero;

    // Puntero colgante, se sigue almacenando la dirección de memoria del espacio que ha sido liberado
    cout << int_puntero << endl;

    /**
     * Por eso cuando se elimina un espacio asignado en memoria del heap
     * con delete, se debe indicar que ya no apunte el puntero
     */
    int_puntero = nullptr;
}