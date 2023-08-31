#include <iostream>
#include <vector>

using namespace std;

int main() {

    // Obligatorio especificar tipo, opcional cantidad a recibir
    // vector <int> records (5);
    // vector <char> letras;

    // Incluir forma manual datos
    // records[0] = 1;

    // Otra forma incluir dat
    vector <int> records {1, 2, 3, 4, 5};
    vector <char> letras {'A', 'B', 'D', 'A', 'B', 'D'};
    
    // 1er valor indicar numero elementos almacenar, 2do valor a almacenar por defecto
    // Se llena repetidamente
    vector <double> salario_base (350, 2125.50);

    // cambiar valor
    records[3] = 105;

    // Acceder elemento en concreto
    cout<< records[3];

    // Al acceder posicion inexistente muestra un espacio no  Alocate Memory
    cout<< records[7];

    // cambiar valor con at
    records.at(4) = 108;

    // Otra forma de acceder, pero no hace comprobación del limite del vector
    cout<< records.at(4); // Si intenta acceder a una posición inexistente sale un error exception

    // Anexar valor al vector
    letras.push_back('W');

    for (int i = 0; i < 4; i++) {

        cout << records[i] << endl;
    }

    for (int j = 0; j < letras.size(); j++) {

        cout << letras[j] << endl;
    }

    int k;

    while(k < salario_base.size()) {

        cout << salario_base[k] << endl;

        k++;
    }

}