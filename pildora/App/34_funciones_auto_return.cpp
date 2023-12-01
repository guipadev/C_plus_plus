/**
 * El auto return o deducción automatica del tipo del retorno en funciones es una caracteristica introducida en el estandar c++14
 * Permite que el compilador deduzca automaticamente el tipo de retorno de una función basandose en el tipo del valor que retorna
 *
 * La utiliza es simplificar la escritura de codigo y para trabajar con tipos complicados o plantillas
 *
 * Trabajo con tipos completo
 * Trabajo con genericos
 * Trabajo con tipos anidados profundos
 * Trabajo con funciones lambda
 * Trabajo con variables auto
 * Trabajo con tipos definidos por el programador
 * Trabajo con funciones de return condicionales
 */

#include <iostream>
using namespace std;
#include <map>
#include <string>

auto suma(int a, int b)
{
    return a + b;
}

/** TRABAJO CON TIPO COMPLETO **/
// Función que devuelve un iterador a un ejemplo especifico en un mapa
// Si no utilizarmos auto deberia indicar map<string, int>::const_iterator buscaEnMapa()...
auto buscaEnMapa(const map<string, int> &myMap, const string &key)
{
    return myMap.find(key);
}

/** TRABAJO CON GENERICOS **/
// Función de plantailla genérica para sumar dos valores
template <typename T, typename U>
// De esta forma puede aceptar varios tipo con auto
auto sumatoria(T a, U b)
{
    return a + b;
}

int main()
{

    int x = 5, y = 3;

    int resultado = suma(x, y);

    cout << "La suma de " << x << " y " << y << " es: " << resultado;

    /** TRABAJO CON TIPO COMPLETO **/

    // Creando y llenando un mapa
    map<string, int> miMapa = {
        {"manzana", 1},
        {"platano", 2},
        {"pera", 3}};

    // Buscar un elmento en el mapa
    auto it = buscaEnMapa(miMapa, "platano");

    // Verificar si el elemento fue encontrado y mostrar su valor
    if (it != miMapa.end())
    {
        cout << "Encontrado 'platano' con el valor: " << it->second << endl;
    }
    else
    {
        cout << "'Platano' no se ha encontrado en el mapa." << endl;
    }

    /** TRABAJO CON GENERICOS **/
    // Uso de la función con enteros
    auto sum1 = sumatoria(5, 3);
    cout << "Suma de enteros: " << sum1 << endl;

    // Uso de la función con entero y un flotante
    auto sum2 = sumatoria(5, 2.5);
    cout << "Suma de enteros y flotante: " << sum2 << endl;

    // Uso de la función con flotantes
    auto sum3 = sumatoria(3.0, 2.7);
    cout << "Suma de flotantes: " << sum3 << endl;

    return 0;
}
