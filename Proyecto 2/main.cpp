#include <iostream>

using namespace std;
double saldo =100;

void sumarsaldo(double s){
     saldo = saldo + s;
}
void restarsaldo(double s){
     if (s <= saldo){
        saldo = saldo - s;
     }else{
        cout << "su valor ingresado  es mayor a su saldo" << endl;
     }
}
string obtenerTipoCuenta(){
   string frase = "";

   if (saldo <= 100){
    frase = "su saldo le perite ser un usuario tipo D";
   } else {
        if((saldo >= 101)&(saldo <=1000)){
            frase = "ssu saldo le permite ser un cliente tipo C";
     } else {
        if((saldo >= 1001)&(saldo <=10000)){
            frase = "su saldo le permite ser un cliente tipo B";
    }
   }
   }
 return frase;
}
int obtenerEdad(int a){
    int operacion = 2018 - a;
    return operacion;

}
int main()
{
    int opcion = 0;
    double numero = 0;
    int anioNacimiento = 0;
     cout << "ingrese su anño de nacimiento" << endl;
    cin >> anioNacimiento;

    cout << "ingrese una opcion" << endl;
    cin >> opcion;

    if(opcion ==1){
       cout << "ingrese un valor a sumar" << endl;
       cin >> numero;
       sumarsaldo(numero);
    }else {
        if(opcion ==2){
           cout << "ingrese un valor a restar" << endl;
           cin >> numero;
           restarsaldo(numero);
        } else {
               cout << "su valor no esta en el rango" << endl;
}
}
    cout << " su valor es " << saldo << " , " << obtenerTipoCuenta() << endl;

    int edad = obtenerEdad(anioNacimiento);
    cout << "su edad es" <<  "" << edad << endl;
    return 0;
}
