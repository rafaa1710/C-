/*
Nombre: Cálculo del área de un círculo
Autor: Rafael Garcia Cambron
Fecha: 08/03/2024
Descripcion: Cálculo del área de un círculo:

*/


#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    
    double   radio, area;

    cout << "Introduce el radio del circulo: " << endl;
    cin >> radio;

    area = radio*radio*M_PI;

    cout << "El area de este circulo es: " << endl;
    cout << area;

}
