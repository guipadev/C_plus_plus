#include <iostream>
using namespace std;

//& pasar valor por referencia
void convertirMinuscula(string &cadena) {

    for(int i = 0; i < cadena.length(); i++) {
        cadena[i] = tolower(cadena[i]);
    }
}

int main() {

    int edad;

    string examen_medico;

    cout << "Por favor introduce tu edad: ";

    cin >> edad;

    cout << "¿Has pasado el examen médico (Si/No)? ";

    cin >> examen_medico;

    convertirMinuscula(examen_medico);

    if (edad >= 18 && examen_medico == "si") {

        cout << "Puedes obtener el carnet de conducir";
    
    } else {

        cout << "No cumples los requisitos";
    }
}