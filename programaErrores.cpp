/*
Nombre: Errores
Autor: Rafael Garcia Cambron
Fecha: 08/03/2024
Descripcion: Comprobacion errores c++

*/

#include <iostream>

using namespace std;

int main ()
{
    const double TASA = 25.00;
    double horas, dias, total, neto;

    cout << "Introduce las horas trabajadas: " << endl;
    cin >> horas;
    cout << "Introduce los dias trabajados: "<< endl;
    cin >> dias;

    total = horas*dias;
    neto = total-TASA;

    cout << "El valor total que pagar es: " << endl;
    cout << total << endl;
    cout << "El valor neto que pagar es: " << endl;
    cout << neto << endl;

    return 0;
    


}