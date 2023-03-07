#include <iostream>

using namespace std;

int main() {

    /*  
    int mi_matriz [4][5] = {15, 25, 8, -7, 92, 77, 12, 11, 7, 44, 56, 59, 43, 78, 12, 43, 95, 12, 87, 33};

    // imprimir la posición
    cout << mi_matriz[0][2]; // 8

    // Sobre escribir posición del valor 8
    mi_matriz[0][2] = 125;

    cout << mi_matriz[0][2];
    

   */
   int mi_matriz [4][5];

   for (int fila = 0; fila < 4; fila++) {

        for (int columna = 0; columna < 5; columna++) {

            cin >> mi_matriz[fila][columna];
        }
   }

   cout << "Visualizamos los valores almacenados" << endl;

    
    for (int fila = 0; fila < 4; fila++) {

        for (int columna = 0; columna < 5; columna++) {

            cout << mi_matriz[fila][columna];
        }

        cout << endl; // salto de linea
   }

   



}