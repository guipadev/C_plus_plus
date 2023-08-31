#include <iostream>

using namespace std;

int main() {

    int num;

    bool es_primo = true;

    cout << "Introduce un número positivo";

    cin >> num;

    for (int i = 2; i <= num / 2; i++) {

        if (num % i == 0) {
            
            es_primo = false;
            
            break;
        }
    }

    if (es_primo) {

        cout << num << " es primo" << endl;
    } else {

        cout << num << " el numero NO es primo" << endl;
    }
}