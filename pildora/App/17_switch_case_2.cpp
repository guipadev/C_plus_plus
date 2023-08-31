// Anidamiento de switch case y comparación de char

#include <iostream>

using namespace std;

int main()
{

    char idioma, categoria;

    cout << "Selecciona el idioma, por favor (E: Español, I: Inglés)";

    cin >> idioma;

    switch (idioma)
    {
    case 'E':
    case 'e':

        cout << "Selecciona la categoría (L: Libros, R: Ropa, T: Tecnología)";
        cin >> categoria;

        switch (categoria)
        {
        case 'L':
        case 'l':
            cout << "Has elegido la categoría Libros";
            break;

        case 'R':
        case 'r':
            cout << "Has elegido la categoría Ropa";
            break;

        case 'T':
        case 't':
            cout << "Has elegido la categoría Tecnología";
            break;

        default:
            cout << "Categoría no válida";
        }

        break;

    case 'I':
    case 'i':

        cout << "Select a category (B: Books, C: Clothing, T: Technology)";
        cin >> categoria;

        switch (categoria)
        {
        case 'B':
        case 'b':
            cout << "You have selected Books category";
            break;

        case 'C':
        case 'c':
            cout << "You have selected Clothing category";
            break;

        case 'T':
        case 't':
            cout << "Your have selected Technology category";
            break;

        default:
            cout << "Invalid category";
        }

        break;

    default:
        cout << "Invalid option";
    }
}