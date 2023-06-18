#include <iostream>

using namespace std;

int main(){

    int a = 3;

    float b = 4.0f;

    double c = 8.0;

    // Si son los 3 son enteros no dara un valor tan exacto, si uno de todos es double si lo sera
    int x = 10, y = 12, z = 30;

    
    double media = (x + y + z) / 3;

    // Deduzca el dato C++
    auto resultado = a + a;

    cout << typeid(resultado).name();

    cout << "La media de los 3 valores es: " << media << endl;

    cout << "El tipo de dato de media es: " << typeid(media).name();
}