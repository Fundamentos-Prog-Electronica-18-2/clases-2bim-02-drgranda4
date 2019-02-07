#include <iostream>
#include <math.h>
// obtener el cuadrado y el cubo de un numero ingresado por el usuario

using namespace std;
int obtenerCuadrado (int numero){
     int  resultado = pow(numero , 2 );
     return resultado;
}
int  obtenerCubo (int numero ){
      int resultado = pow(numero , 3);
      return resultado;
}

int main()
{
    double numero = 0;
    int opcion = 0;
    int resultado = 0;

      cout << "Ingrese una opcion para operar" << endl;
    cin >> opcion;

    cout << "Ingrese un numero para operar" << endl;
    cin >> numero;


    if (opcion == 1){
    resultado = obtenerCuadrado(numero);
        cout << "El cuadrado del numero " << numero << "es :" << resultado << endl;
    }else{
        if (opcion == 2){
            resultado = obtenerCubo(numero);
            cout << "El cubo del numero " << numero << "es :" << resultado << endl;
        }else{
            cout << "Opción incorrecta "  << endl;
        }
    }

    return 0;
}
