#include <iostream>
#include <cmath> // operaciones matematicas

using namespace std;

/**
 * - Un prototipo de función, es una declaración previa de una función que informa al compilador de que
 * se utilizará en el un programa esa función, así como su tipo y número de parámetros y si la función
 * devolvéra o no un valor
 *
 * - Como decirle al compilador que vamos a usar una función?
 *
 * Definiendo la función antes de su uso
 * - En programas pequeños OK, pero en programas grandes es un problema
 *
 * Usando funciones prototipos
 * - Especifican al compilador qué funciones se van a utilizar en el programa así como de su párametros
 * y tipos y si la función devolverá valor o no
 * - Se colocan al comienzo del programa. (No es estrictamente necesario que así sea pero por convención
 * suele ser su lugar)
 * - Admite la posibilidad de crearlas en archivos externos (extensiones .h / .hpp)
 */

/**
 * Función prototipo
 * Así informamos al compilador de C++ que en alguna parte del programa vamos a usar esta función
 */
double elevaPotencia(double base, double exponente);

/**
 * Función que solo muestra mensaje, no devuelve nada
 * No sirve para operar el resultado en ninguna parte
 */
void elevador(double piso, double personas)
{
    cout << pow(piso, personas);
}

int main()
{
    double base, exponente;

    cout << "Introduce la base: ";

    cin >> base;

    cout << "Introduce el exponente: ";

    cin >> exponente;

    cout << "El resultado es: " << elevaPotencia(base, exponente);

    cout << "El ascensor subio al psio: ";
    elevador(2, 3);
}

/**
 * Si esta función se llamara así sin se prototipada con anterioridad genera error
 * Ya se se lee de arriba hacia abajo
 */
double elevaPotencia(double base, double exponente)
{
    return pow(base, exponente);
}