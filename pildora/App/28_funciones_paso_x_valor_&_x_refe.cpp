#include <iostream>
#include <cmath>

using namespace std;

/**
 * PASO DE PARÁMETRO POR VALOR UTILIDAD
 *
 * Operaciones matematicas que no requieren modificar el valor original:
 * Por ejemplo, si tienes una función que simplemente calcula el cuadrado de un número
 *
 * Funciones que necesitan garantizar que el valor original no sea modificado:
 * A veces quieres asegurarte de que, independientemente de lo que haga la función,
 * el valor original no se vera afectado. Pasar por valor proporciona esta garantia.
 *
 * PASO DE PARÁMETROS POR REFERENCIA UTILIDAD
 *
 * Modificación en el lugar:
 * Cuando necesites que una función modifique directamente los valores de las variables que le pasan.
 * Por ejemplo, una función que resetea un valor.
 *
 * Evitar copias costosas:
 * Cuando trabajas con estructuras o clases grandes, copiar todo el objeto puede ser ineficiente.
 * Pasar por referencia evita esta copia.
 *
 * Devolución de múltiples valores:
 * Aunque en C++ podemos usar pair, tuple o estructuras para devolver múltiples valores, a veces es más
 * práctico usar referencias para obtener más de un resultado de una función.
 *
 * Polimorfismo:
 * Cuando trabajas con clases base y derivada y quieres hacer uso de polimorfismo, es común
 * pasar los objetos por referencia (o por punteros) para asegurarnos de que se llama a las
 * funciones miembros adecuadas (sobreescritas).
 */

// Para pasar por referencia anteponemos &
void ejemploFuncion(int &num)
{
    num = 50;
}

int main()
{
    int minum = 10; // Vr permanece inalterable

    cout << "Valor original: " << minum << endl;

    /**
     * Paso por valor
     * Es como hacer un copia de minum
     */
    ejemploFuncion(minum);

    cout << "Valor despúes de llamar la función: " << minum << endl;
    // Paso por valor
    // Valor original: 10
    // Valor despúes de llamar la función: 10

    // Paso por referencia
    // Valor original: 10
    // Valor despúes de llamar la función: 50
}