#include <iostream>

using namespace std;

int main() {
    
    int a = 5;

    int b = 10;

    a += b;

    // prefijo
    int z =++ a;

    cout << "El valor de a es " << a << endl;

    cout << "El valor de z es " << z << endl;

    cout << "El valor de a es " << a << endl;

    // sufijo
    int w = b++;

    cout << "El valor de w es " << w << endl;

    cout << "El valor de b es " << b << endl;


}