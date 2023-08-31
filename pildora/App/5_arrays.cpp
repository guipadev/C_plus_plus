#include <iostream>

using namespace std;

int main() {

    // Sin especificar cantidad elementos
    int matrix[] {15,20,25};

    cout << matrix[1] << endl;

    cout << matrix[2] << endl;

    // Especificando cantidad elementos
    int edades[10] {1,2,3};

    cout << edades[7] << endl;

    // Especificar mediante una constante
    const int personas{10};

    int capacidad[personas] {5,6,7,8};

    // Ingresar dato a posicion
    capacidad[9] = 12;

    // Sobre escribir valor
    //capacidad[0] = 99;
    cin >> capacidad[0];

    cout << capacidad[9] << endl;

    cout << "La capacidad de gente es: " << capacidad[0] << "promedio edad: " << edades[2];
}