#include <iostream>
using namespace std;

int main()
{

    const string nombre = "Juan";

    int edad{21};

    double salario;

    cout << "Introduce el salario del empleado: ";

    cin >> salario;

    cout << "Introduce edad del empleado: ";

    cin >> edad;

    // nombre="Ana";

    cout << "-----------------------------------------------" << endl;

    cout << "Datos del empelado: " << endl;

    cout << "Nombre: " << nombre << ", Edad: " << edad << ", Salario: " << salario;
}