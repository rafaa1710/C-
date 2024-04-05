/*
Autor: Rafael Garcia Cambron
Fecha: 01/04/2024
Descripcion: Desarrolla un programa en C++ que incluya tanto una función como un procedimiento. 
El procedimiento debe llamarse incrementar y tomar un número entero por referencia, incrementando su valor en 1.
La función debe llamarse calcularCuadrado y tomar un número entero como argumento, devolviendo el cuadrado de ese número.
En el programa principal, define una variable entera, muestra su valor original, llama al procedimiento incrementar con esta variable como argumento,
muestra el nuevo valor de la variable, luego llama a la función calcularCuadrado con la misma variable y muestra el resultado devuelto por la función.

*/


#include <iostream>

using namespace std;

void incrementar(int &numero1){
    numero1+=1;
}

int calcularCuadrado(int numero1){
    return numero1*numero1;
}


int main ()
{
int numero1=6;

cout << "El numero original es: "<< numero1 << endl;

     incrementar(numero1);
     
     cout << "El valor incrementado es: "<<numero1 << endl;
     
     cout << "El cuadrado del numero incrementado es : "<< calcularCuadrado(numero1) << endl;
    


    return 0;
}