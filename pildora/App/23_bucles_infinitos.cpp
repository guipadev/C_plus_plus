#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

/*
- En la mayoría de las situaciones, un bucle infinito se considera un error o un defecto en la programación, ya que puede causar que un programa se quede atascado sin hacer progresos o consuma recursos innecesariamente.
- Sin embargo, hay escenarios específicos en los que un bucle infinito es intencional y puede ser útil.
    - Aplicaciones que deban ejecutarse continuamente.
    - Programas interactivos.
    - Prototipadao y depuración.
    - Trabajo de larga duración.
    - Programas con sistemas de control manual.
    - Patrones de diseño.
*/

/*
El unico hilo de ejecución que tiene este programa, haga pausa de 3 seg. con la finalidad de dar
a conocer la temparuta en cada tiempo determinado, simulando un termometro que me da la temperatura
cada 3seg monitoriando esto
*/

double leerTemperatura()
{
    return 20.0 + (rand() % 20);
}

void esperarSegundos(int segundos)
{
    this_thread::sleep_for(chrono::seconds(segundos));
}

int main()
{

    const double LIMITE_TEMPERATURA = 35.0;

    while (true)
    {
        double tempActual = leerTemperatura();

        cout << "Temperatura actual: " << tempActual << "°C" << endl;

        if (tempActual > LIMITE_TEMPERATURA)
            cout << "¡¡ ALERTA !! Temperatura elevada detectada: " << tempActual << "°C" << endl;
    }

    esperarSegundos(3);
}