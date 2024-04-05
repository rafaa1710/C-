#include <iostream>

using namespace std;



int factorial(int n){ //Caso base el factorial de 0 y 1 es: 1
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);

    }
}


int main ()
{
int n;
int resultado;

cout  << "Introduce un numero para calcular su factorial:"<<endl;
cin >> n;

//Llamada al metodo factrial

resultado=factorial(n);

cout  << "El factorial del numero "<<n<<" es:"<<resultado << endl;
    


    return 0;
}