#include <iostream>
#include <vector>

using namespace std;

void duplicarElementos(vector<int> &num)
{
    // Si quitamos la indicacion por referencia el original y luego no cambia
    for (int &valor : num)
    {
        valor *= 2;
    }
}

int main()
{
    vector<int> numeros = {1, 2, 3, 4, 5};

    cout << "Valor originales: ";

    for (int valor : numeros)
    {
        cout << valor << " ";
    }

    cout << endl;

    duplicarElementos(numeros);

    cout << "Valores después de llamar a la función: ";

    for (int valor : numeros)
    {
        cout << valor << " ";
    }

    cout << endl;
}