#include <iostream>
using namespace std;

int main() {

    int edad;

    cout << "Por favor introduce tu edad: ";

    cin >> edad;

    if (edad >= 18) {

        cout << "Tienes la edad suficiente para sacarete la cedula";
    
    } else {

        cout << "No tienes la edad suficiente para obtener la cedula";
    }
}