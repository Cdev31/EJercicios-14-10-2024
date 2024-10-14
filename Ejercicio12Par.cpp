#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int numerosecreto = rand() % 10 + 1, intento, contadorintentos = 0;
    const int maxintentos = 5;
    cout << "Adivine el numero del 1 al 10" << endl;
    cout << "Tienes " << maxintentos << " intentos para adivinar un numero entre 1 y 10" << endl;

    while (contadorintentos < maxintentos)
    {
        cout << "Intento " << (contadorintentos + 1) << ": Ingresa tu numero: ";
        cin >> intento;

        contadorintentos++;

        if (intento == numerosecreto)
        {
            cout << "Felicidades. Adivinaste el numero en " << contadorintentos << " intentos" << endl;
            break;
        }
        else if (intento < numerosecreto)
        {
            cout << "El numero es mayor" << endl;
        }
        else
        {
            cout << "El numero es menor" << endl;
        }

        if (contadorintentos == maxintentos)
        {
            cout << "Lo siento, has agotado tus intentos. El numero secreto era " << numerosecreto << endl;
        }
    }

    return 0;
}