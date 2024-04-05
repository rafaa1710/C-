/*
Nombre: Cálculo del área de un rectángulo
Autor: Rafael Garcia Cambron
Fecha: 08/03/2024
Descripcion: Cálculo del área de un rectángulo

*/


#include <iostream>

using namespace std;

int main ()
{
    double base, altura, area;

    cout << "Introduce la base de un rectangulo: " << endl;
     cin >> base;
    cout << "Introduce la altura de un rectangulo: " << endl;
    cin >> altura;

    area = base*altura;
    cout << "El area del rectangulo es: " << endl;
    cout << area;
}