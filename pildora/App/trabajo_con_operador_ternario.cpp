#include <iostream>

using namespace std;

int main()
{

    int num{};

    cout << "Introduce un No. entero";

    /*
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " es par" << endl;
    } else {
        cout << num << " es impar" << endl;
    }
    */

    cout << num << " es " << ((num % 2 == 0) ? " es par" : " es impar");

    // No colocar () ya no tendremos el problema, de precedencia de operadores

    string resultado = (num % 2 == 0) ? " es par" : " es impar";

    cout << num << " es " << resultado;
}