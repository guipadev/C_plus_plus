#include <iostream>
#include <cmath> // operaciones matematicas

using namespace std;

/**
 * Qué es una función:
 * Una función es bloque de código identificado con un nombre que realiza una tarea específica
 * y puede tomar opcionalmente datos de entrada y devolver un resultado
 *
 * Para que sirve:
 * Reutilización de código
 * Modularidad
 * Abstracción
 * Reducción de errores
 * Flexibilidad
 *
 * Tipos de funciones:
 * Definidas por el lenguaje, en la biblioteca estadar de C++
 * Definidas por el programador. Funciones de creación propia
 */

double elevaPotencia(double base, double exponente)
{
    return pow(base, exponente);
}

int main()
{
    cout << "El resultado es: " << elevaPotencia(5, 3);
}