#include <iostream>
#include <vector>

using namespace std;

int main() {

    cout << "Cuántos elementos quieres que tenga el vector?";
    
    int elementos = 0;

    cin >> elementos;

    vector <int> datos (elementos);

    int nuevo_elem;

    for (int i = 0; i < datos.size(); i++) {

        cout << "Introduce el elemento del vector No. " << i + 1 <<endl;

        // cin >> datos[i]; // Ingresar dato

        // Otra forma ingresar datos
        cin >> nuevo_elem;

        datos.push_back(nuevo_elem);
    }

    cout << "A continuación te muestro los elementos almacenadosen el vector" <<endl;

    for(int j = 0; j < datos.size(); j++) {
        // cout << datos[j] <<endl;
        cout << datos.at(j) <<endl; // Otra forma agregar
    }
}