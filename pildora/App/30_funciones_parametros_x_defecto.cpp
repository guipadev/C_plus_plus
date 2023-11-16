#include <iostream>
using namespace std;

// veces es parametro por defecto, por lo cual es opcional
void mostraMensaje(string msg, int veces = 1)
{

    for (int i = 0; i < veces; i++)
    {
        cout << msg << endl;
    }
}

// este parametro siempre debe estar de último lugar
// intercalar parametros por defecto no es posible siempre va al final
void mostraMensaje3(int valor, string msg = "hola bebe", int veces = 1)
{

    for (int i = 0; i < veces; i++)
    {
        cout << msg << endl;
    }
}

// Esto si es posible de tener más de un parametro por defecto
void mostraMensaje2(string msg = "hola bebe", int veces = 1)
{

    for (int i = 0; i < veces; i++)
    {
        cout << msg << endl;
    }
}

int main()
{

    mostraMensaje("Hola alumnos");

    mostraMensaje("Que paso locos", 7);

    // Al tener varios parametros hay varias combinaciones posibles
    mostraMensaje2();
    mostraMensaje2("hasta luego");
    mostraMensaje2("entonces", 5);
    // mostraMensaje2(5); // este de omitir el primer parametro no es posible o poner , para separar
}