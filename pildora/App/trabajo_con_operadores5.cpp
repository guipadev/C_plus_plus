#include <iostream>
using namespace std;

/*Se da beca 
si su calificación superior a 8 
o si la distancia del domicilio al centro es superior a 20 km
además ingresos familiares inferiores a 20.000 USD
*/

int main() {

    int calificacion, distancia_centro, ingresos_familiares;

    cout << "Por favor introduce la calificación: ";

    cin >> calificacion;

    cout << "Por favor introduce la distancia al centro: ";

    cin >> distancia_centro;

    cout << "Por favor introduce ingresos familiares: ";

    cin >> ingresos_familiares;


    if (calificacion > 8 || (distancia_centro > 20 && ingresos_familiares < 20000)) {

        cout << "Tienes derecho a beca";
    
    } else {

        cout << "No cumples los requisitos para la beca";
    }
}