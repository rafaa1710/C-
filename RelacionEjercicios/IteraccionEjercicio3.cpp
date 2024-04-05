/*
Nombre: Calcular el factorial de un número (emplea for)
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Calcular el factorial de un número (emplea for)
*/


#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    int numero;
    int resultado = 1;
    
    cout << "Introduce un numero : " << endl;
    cin >> numero;
    if(numero==0){
        resultado=1;
    }
    else{

        for(int i=numero; i>1; i--){
        resultado*=i;
        }
        
    }

    cout << resultado << endl;

    return 0;
}