#include <iostream>

// Controlar el paso de vehiculos hora, dia y año

using namespace std;

int main() {

    int pasoCoches[24][31][12]; // Hora, día, mes

    // 15 de mayo a las 2 de la madrugada
    //pasoCoches[2][14][4] = 4;
    //cout << "El número de coches que pasaron el 15 de mayo a las 2AM son: " << pasoCoches[2][14][4];

    // Rellenar de forma aleatoria
    for (int i = 0; i < 24; i++) {

        for (int j = 0; j < 31; j++) {

            for (int k = 0; k < 12; k++) {

                pasoCoches[i][j][k] = rand() % 1000; // Generar aleatorios entre 0 y 1000

            }
        }
    }
    cout << "El número de coches que pasaron el 7 de noviembre a las 7PM fueron: " << pasoCoches[19][06][10];
}