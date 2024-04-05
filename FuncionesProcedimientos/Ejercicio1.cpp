/*
Nombre: Suma de dos números
Autor: Rafael Garcia Cambron
Fecha: 01/04/2024
Descripcion: Escribe un programa en C++ que defina una función llamada suma que tome dos números enteros como parámetros y devuelva la suma de estos dos números.
 En el programa principal, solicita al usuario dos números enteros, llama a la función suma con estos números como argumentos y muestra el resultado de la suma.
*/


#include <iostream>

using namespace std;

int suma(int a, int b){
    return a + b;
}


int main ()
{
int a,b;

     cout << "Introduce un numero: " << endl;
     cin >> a;
     
     cout << "Introduce otro numero: " << endl;
     cin >> b;

     cout << a << "+" << b << "=" << suma(a,b) << endl; 

    return 0;
}

 