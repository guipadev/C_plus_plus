/*
Bucle FOR-EACH
Utilizado para recorrer colecciones, como los arrays o los contenedores (vector, list, set, map etc)
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int edades[]{15, 25, 27, 35, 95};

    for (int e : edades)
    {

        cout << e << endl;
    }

    double salarios[]{1500.25, 2500.50};

    // inferencia de tipos: detectar el tipo a recorrer sin conocerlo
    for (auto x : salarios)
    {
        cout << x << endl;
    }

    // Buscar un caracter especifico de un String
    string email = "pepe@gmail.com";

    for (auto z : email)
    {
        if (z == '@')
            cout << "Encontré la @";
        // else cout << "No la encontre";
    }

    // Ingresar los números que quiera en el vector, pero si es 0 termina
    // Y muestra los números ingresados al vector

    vector<int> numeros;

    int num;

    cout << "Introduce varios números. Escribe 0 para salir" << endl;

    while (cin >> num && num != 0)
    {

        numeros.push_back(num);
    }

    cout << "Has introducido los siguientes números: " << endl;

    for (int n : numeros)
    {

        cout << n << endl;
    }
}