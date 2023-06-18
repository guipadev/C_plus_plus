#include <iostream>

using namespace std;

int main()
{

    /*
    for (int i = 0; i < 10; i++) {
        cout << "Hola alumnos" << endl;
    }
    */

    /*
    int edades[] = {25, 35, 80, 50, 27};

    for (int i = 0; i < 5; i++)
    {

        cout << "Edad: " << edades[i] << endl;
    }
    */

    int edades[3][5] = {
        {25, 35, 80, 50, 27},
        {17, 19, 81, 52, 93},
        {7, 9, 18, 23, 19}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            cout << "Edad: " << edades[i][j] << endl;
        }
    }
}