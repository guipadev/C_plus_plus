#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime>   // para time()

using namespace std;

int main()
{

    srand(time(nullptr));

    char continuar;

    do
    {

        int numeroSecreto = rand() % 100 + 1;

        int intentos = 0;

        bool adivinado = false;

        while (intentos < 5 && !adivinado)
        {

            int miNumero;

            cout << "Introduce un número entre  y 100 \n";

            cin >> miNumero;

            if (miNumero == numeroSecreto)
            {

                cout << "¡Acertaste!\n";

                adivinado = true;
            }
            else if (miNumero < numeroSecreto)
                cout << "El número es mayor \n";

            else
                cout << "El número es menor \n";

            intentos++;
        }

        if (!adivinado)
            cout << "Lo siento no has adivinado el número. Era el N°: " << numeroSecreto << ".\n";

        cout << "¿Quieres jugar de nuevo? (s/n)";

        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "Gracias por jugar!!";
}