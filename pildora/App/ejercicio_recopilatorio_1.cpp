/*
¿Cuántos metros quieres instalar con calidad media?
¿Cuántos metors quieres instalar con calidad alta?
Precio m calidad media = 35.5€
Precio m calidad alta = 55.3€
IVA 21%
Díias validez del presupuesto = 30 días
*/

#include <iostream>

using namespace std;

int main()
{
    cout << "BIENVENIDO AL SERVICIO INSTLACIÓN DE TARIMA FLOTANTE"<< endl;

    int metros_calidad_media{0};

    cout << "\n¿Cuántos metros quieres instalar de calidad media?";

    cin >> metros_calidad_media;

    int metros_calidad_alta{0};

    cout << "\n¿Cuántos metros quieres instalar con calidad alta?";

    cin >> metros_calidad_alta; 

    const double precio_calidad_media{35.5};
    
    const double precio_calidad_alta{55.3};

    const double iva{0.21};

    const int expira_presupuesto{30};

    cout << "\nPresupuesto para instalación de tarima flotante:" << endl;

    cout << "Números de metros de calidad media: " << metros_calidad_media << endl;

    cout << "Números de metros de calidad alta: " << metros_calidad_alta << endl;

    cout << "Precio de tarima calidad media: " << precio_calidad_media << endl;

    cout << "Precio de tarima calidad alta: " << precio_calidad_alta << endl;

    cout << "IMPORTE: ";

    cout << (precio_calidad_alta * metros_calidad_alta) + (precio_calidad_media * metros_calidad_media) << "€." << endl;

    cout << "IVA: " << ((precio_calidad_alta * metros_calidad_alta) + (precio_calidad_media * metros_calidad_media))*iva << " €." << endl;

    cout << "=====================================================================" << endl;

    cout << "IMPORTE TOTAL: ";

    cout << (precio_calidad_alta * metros_calidad_alta) + (precio_calidad_media * metros_calidad_media)+
    (((precio_calidad_alta * metros_calidad_alta) + (precio_calidad_media * metros_calidad_media))*iva) << " €.";

    cout << "presupuesto válido durante " << expira_presupuesto << " días.";

}
