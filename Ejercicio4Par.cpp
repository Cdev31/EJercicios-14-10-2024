#include <iostream>

using namespace std;
int main()
{
    int numerosecreto = 8;
    int intento;

    cout << "Adivina el numero secreto" << endl;
    cout << "Ingresa un numero entre 1 y 10:" << endl;

    cin >> intento;
    while (intento != numerosecreto)
    {
        if (intento > numerosecreto)
        {
            cout << "El numero es demasiado alto. Ingrese el numero nuevo: ";
        }
        else if (intento < numerosecreto)
        {
            cout << "El numero es demasiado bajo. Ingrese el numero nuevo: ";
        }
        cin >> intento;
    }
    cout <<  "El numero ingresado es correcto.";

    return 0;
    
}