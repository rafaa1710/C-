/*
Autor: Rafael Garcia Cambron
Fecha: 01/04/2024
Descripcion: Crea un programa en C++ que tenga un procedimiento llamado duplicar. Este procedimiento debe tomar un número entero como parámetro y duplicar su valor. En el programa principal, define una variable entera, muestra su valor original,
 llama al procedimiento duplicar con esta variable como argumento y muestra el nuevo valor de la variable después de duplicarla.

*/


#include <iostream>

using namespace std;

int duplicar(int numero1){
    return numero1*2;
}


int main ()
{
int numero1;

     cout << "Introduce un numero: " << endl;
     cin >> numero1;
     
     

     cout <<"El valor doble del numero " << numero1 << " es " << duplicar(numero1) << endl; 

    return 0;
}