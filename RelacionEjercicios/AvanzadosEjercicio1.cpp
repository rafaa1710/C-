/*
Nombre: Implementa un menú que ejecute una calculadora:
Autor: Rafael Garcia Cambron
Fecha: 15/03/2024
Descripcion: Implementa un menú que ejecute una calculadora:
*/



#include <iostream>
#include <math.h>

using namespace std;

       
int main ()
{
    char operacion;
    int numero1,numero2;
    int resultado=0;
    bool bandera=true;
    

    do
    {
        cout << "Ingrese una operacion(+, -, *, /) o 'q' para salir: " << endl;
        cin >> operacion;
        if(operacion=='+' || operacion=='-'|| operacion=='*'|| operacion=='/'){

            cout << "Ingrese un numero: " << endl;
            cin >> numero1;
            cout << "Ingrese otro numero: " << endl;
            cin >> numero2;
        }
        else if(operacion=='q'){

        }
        else{
            cout << "El caracter introducido es incorrecto: " <<resultado << endl;
        }

        


         switch (operacion){
            case '+':
                 resultado=numero1+numero2;
                 cout << "El resultado es: " <<resultado << endl;
                 
            break;

            case '-':
                resultado=numero1-numero2;
                cout << "El resultado es: " <<resultado << endl;
                break;

            case '*':
                resultado=numero1*numero2;
                cout << "El resultado es: " <<resultado << endl;
                break;

            case '/':
                resultado=numero1/numero2;
                cout << "El resultado es: " <<resultado << endl;
                break;

            case 'q':
                bandera=false;
                cout << "Hasta luego " << endl;
                break;

            default:
                cout << "Esta opcion es incorrecta " << endl;
                break;

    }
    } while (bandera==true);
    

   
}