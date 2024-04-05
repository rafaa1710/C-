/*
Nombre: Calcular el mayor de tres números (emplea if-else):
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Calcular el mayor de tres números (emplea if-else):

*/

#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    int numero1, numero2,numero3;

    cout << "Introduce un primer numero: " << endl;
    cin >> numero1;

    cout << "Introduce un segundo numero: " << endl;
    cin >> numero2;

    cout << "Introduce un tercer numero: " << endl;
    cin >> numero3;

    if(numero1>numero2){
      if(numero1>numero3){
        cout<<"El numero mayor es el primero";
      }  
      else{
        cout<<"El numero mayor es el tercero";
      }
    }
    else {
        if(numero2>numero3){
            cout<<"El numero mayor es el segundo";
        }
        else{
        cout<<"El numero mayor es el tercero";
        }
    }
    

}