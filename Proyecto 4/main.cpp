#include <iostream>

// generar una solucion que permita obtener el area de:
// un cuadrado
// un rectangulo
// y un circulo

using namespace std;
float  obtenerAreaCuadrado( float a ){
    double resultado=  a*a;
    return resultado;
}
float obtenerAreaRectangulo(float a, float b){
   double resultado= a*b;
    return resultado;

}
float obtenerAreaCirculo(float a){
   double resultado= (a*a)*(3.1416);
    return resultado;
}

int main()
{
    int opcion = 0;
    double lado = 0;
    double base = 0;
    double altura = 0;
    double radio = 0;
    double resultado = 0;
    cout << "Ingrese la opcion: 1. cuadrado 2. rectangulo 3. circulo" << endl;
    cin>> opcion;
    if (opcion == 1){
        cout << "Ingrese el valor del lado del cuadrado" << endl;
        cin >> lado;
        resultado = obtenerAreaCuadrado(lado);
        cout << "El valor del �rea del cuadrado es: " << resultado << endl;
    }else{
        if(opcion == 2){
            cout << "Ingrese el valor de la base del rectangulo" << endl;
            cin >> base;
            cout << "Ingrese el valor de la  altura del rectangulo" << endl;
            cin >> altura;
            resultado = obtenerAreaRectangulo(base, altura);
            cout << "El valor del �rea del rectangulo es: " << resultado << endl;
        }else{
            if(opcion==3){
                cout << "Ingrese el valor del radio del circulo " << endl;
                cin >> radio;
                resultado = obtenerAreaCirculo(radio);
                cout << "El valor del �rea del circulo es: " << resultado << endl;
            }else{
                cout << "existe un error en la opcion seleccionada" << endl;
            }
        }
    }
    return 0;
}
