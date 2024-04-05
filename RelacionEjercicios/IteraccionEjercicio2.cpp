/*
Nombre: Sumar los primeros 10 números naturales (emplea do-while):
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Sumar los primeros 10 números naturales (emplea do-while):
*/



#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    int numero=1;
    int acumulador=0;

    do{
        acumulador+=numero;
        numero++;
        

    } while (numero<=10);
    
    cout << acumulador << endl;




}