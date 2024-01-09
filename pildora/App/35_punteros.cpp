/*
* Punteros

    - QUÉ SON
    - Qué son los punteros?
        - Son una caracteristica fundamental en C++ que permiten una gestión eficiente y detallada de memoria y otros recursos del hardware.
        Los punteros son variables cuya función principal es almacenar direcciones de memoria.
        - ¿Que puede haber en las direcciones de memoria almacenada por los punteros?
            - variables primitivas
            - Arrays
            - Clases
            - Otro puntero
            - Funciones
            - Bloque de memoria dinámica
            - Bloque de memoria reservado
            - Etc

    - PARA QUÉ SIRVEN
    - ¿Para qué sirven los punteros? Principales aplicaciones
        - Acceso directo y modificación de memoria
        - Funciones dinámicas y estructura de datos
        - Paso de parámetro por referencia
        - Arrays y Strings
        - Programación de bajo nivel
    - PUNTEROS VS NO PUNTEROS
        - PUNTEROS                                  - NO PUNTEROS
        - Control director de la memoria            - Más simplicidad en el desarrollo
        - Flexibilidad en manejo de datos           - Mayor seguridad
        - Interacción con hardware de bajo nivel    - Menor preocupación por fallos de memoria
        - Paso de parámetros por referencia
        - Compatibilidad con C

    - Declaración
    - Almacenar direcciones en punteros
    - Defering con punteros
    - Ubicación de memoria dinámica
    - Aritmética de punteros
    - Punteros y arrays
    - Paso de parámetros por referencia con punteros
    - Constantes y punteros
* Punteros a funcion
* Problemas con punteros
* Constantes y referencias
* Punteros inteligentes
*/

#include <iostream>
using namespace std;

int variable = 15;

// Cambio valor variable
void miFuncion(int var)
{
    var = var + 10;
}

// Cambio valor de acuerdo al puntero
// Es más eficiente en memoria y tiempo, ya que no pasamos una copia de la variable
// Ya que pasamos una referencia a la variable original y no una copia
void miFuncion2(int *var)
{
    *var = *var + 10;
}

int main()
{

    int var = 10;

    // Declarar puntero
    int *ptr;

    // Uso dirección de la memoria de la variable var
    ptr = &var;

    cout << var << endl; // Imprimir el valor de var

    cout << &var << endl; // Imprimir la dirección en memoria de var

    cout << ptr << endl; // Imprimir la dirección almacenada en puntero ptr

    cout << *ptr << endl; // Imprimir el valor apuntado por ptr

    // Cambiar el valor de la variable desde el puntero
    *ptr = 55;

    cout << var << endl; // Modifico el valor de var desde su puntero, que sera 55

    // EJEMPLO 2

    miFuncion(variable);

    cout << variable << endl; // 15

    // Debo pasar valor de dirección en memoria fisica de variable
    miFuncion2(&variable);

    cout << variable << endl; // 25
}