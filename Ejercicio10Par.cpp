#include <iostream>
using namespace std;

int main (){
    float numero, counter=0, sumatoria =0, promedio;

    cout << "Calcula el promedio de una serie de numeros." << endl;
    
    while ( numero > 0) {
    cout << "Ingrese un numero a calcular: " << endl;
    cin >> numero;

    if( numero < 0 ) break; 
    sumatoria = sumatoria + numero;
    counter ++;
   
    }
     promedio = sumatoria / counter;

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;
    return 0;
}

// Ejercicio realizado por: Elias Samuel Rubio y Rosmery del Carmen Torres