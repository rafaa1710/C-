/*
Nombre: Verificar si un número es positivo, negativo o cero (emplea if-else):
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Verificar si un número es positivo, negativo o cero (emplea if-else):

*/


#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    int numero;

    cout << "Introduce un numero: " << endl;
    cin >> numero;

    if(numero>0){

        cout<<"El numero es positivo";
    }
    else if(numero==0){
        cout<<"El numero es 0";
    }
    else{
        cout<<"El numero es negativo";
    }





}


