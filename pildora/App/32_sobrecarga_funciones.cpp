#include <iostream>
using namespace std;

/*
Capacidad de definir multiples funciones con el mismo nombre pero con diferentes listas de parametros

Esta caracteristica permite que programadores usen el mismo nombre de funcion para realizar tareas
similares, diferenciando cada funcion por los tipo y/o número de sus argumentos

Utilidades
- Mejorar el código
- Abstracción
- Flexibidad
- Polimorfismo
- Reutilización de código
- Intuitividad

Importante
Usar sobre carga de funciones con cuidado para evitar confusiones y ambiguedades en el código.
Un uso inapropiado puede llevar a errores y complicaciones difíciles de detectar. Por lo tanto
es crucial garantizar que las funciones sobrecargadas tengan una relación lógica y clara entre sí.

Nota
- Diferente lista de parámetros: Para sobrecargar una función, al menos uno de los sigueintes debe ser diferente:
- Numero de parametros
- Tipo de parametros
- Secuencia de tipos de parámetros
- El tipo devuelto por la función no influye
- Cuidado con funciones con valores predeterminados

Especial relevancia con la POO
- sobrecarga de constructores
- polimorfismo
- encapsulación y abstracción
- organización y legibilidad
- extensibilidad
*/

int sumar(int a, int b)
{
    return a + b;
}

int sumar(int a, int b, int c)
{
    return a + b + c;
}

int sumar(float a, float b)
{
    return a + b;
}

int main()
{
    cout << sumar(3, 4) << endl;
    cout << sumar(3, 4, 5) << endl;
    cout << sumar(3.0f, 4.5f) << endl;
}
