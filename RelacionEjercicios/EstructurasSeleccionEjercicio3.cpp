/*
Nombre: Realiza un programa donde usuario ingresa un número del mes y luego se utiliza la declaración switch para seleccionar el nombre del mes correspondiente.
 Cada case representa un número de mes y se imprime el nombre del mes correspondiente.
 Si el número ingresado no está en el rango de 1 a 12, se imprime un mensaje de error utilizando default.
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Realiza un programa donde usuario ingresa un número del mes y luego se utiliza la declaración switch para seleccionar el nombre del mes correspondiente. 
Cada case representa un número de mes y se imprime el nombre del mes correspondiente. 
Si el número ingresado no está en el rango de 1 a 12, se imprime un mensaje de error utilizando default.

*/

#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    int numeroMes;

    cout << "Introduce un numero de mes: " << endl;
    cin >> numeroMes;

        switch (numeroMes){
        case 1:
            cout << "El mes es enero " << endl;
            break;
        case 2:
            cout << "El mes es febrero " << endl;
            break;

        case 3:
            cout << "El mes es marzo " << endl;
            break;

        case 4:
            cout << "El mes es abril " << endl;
            break;

        case 5:
            cout << "El mes es mayo " << endl;
            break;

        case 6:
            cout << "El mes es junio" << endl;
            break;

        case 7:
            cout << "El mes es julio " << endl;
            break;


        case 8:
            cout << "El mes es agosto " << endl;
            break;

        case 9:
            cout << "El mes es septiembre " << endl;
            break;

        case 10:
            cout << "El mes es octubre " << endl;
            break;
        case 11:
            cout << "El mes es noviembre " << endl;
            break;

        case 12:
            cout << "El mes es diciembre " << endl;
            break;

        default:
            cout << "El numero no es valido, no corresponde a ningun mes" << endl;
            break;
        }




}