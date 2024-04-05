/*
Nombre: Calcula el promedio de tres numeros
Autor: Rafael Garcia Cambron
Fecha: 08/03/2024
Descripcion: Calculo el promedio de tres numeros

*/


#include <iostream>

using namespace std;

int main ()
{

    double numero1, numero2, numero3, promedio;

    cout << "Introduce un numero: " << endl;
     cin >> numero1;

     cout << "Introduce otro numero: "<< endl;
     cin >> numero2;

     cout << "Introduce un ultimo numero: "<< endl;
     cin >> numero3;

     promedio = (numero1+numero2+numero3)/3;

     cout << "El promedio de los tres numeros introduciods es: "<< endl;
     cout << promedio;



}
