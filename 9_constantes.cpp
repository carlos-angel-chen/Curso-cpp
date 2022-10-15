#include <iostream>
using namespace std;

// Las constantes SIEMPRE se tienen que:
//  - DECLARAR
//  - INICIALIZAR 
//  al mismo tiempo

/* Constantes LITERALES: \n, \t, \b, etc. 
 * Constantes DECLARADAS: const double IVA=0.21;
 * Expresiones de constantes: se usa la palabra reservada constexpr
 * Constantes enumeradas: se usa la palabra reservada enum
 * Constantes definidas: se usa #define
 */

int main(){
    const string nombre="Carlos";
    double salario;
    int edad;
    const int pi=3.14;

    cout << "Introduce el salario: "; 
    cin >> salario;     //pido al usuario que ingrese el salario por consola

    cout << "Introduce la edad: ";
    cin >> edad;        //pido al usuario que ingrese la edad

    cout << "Datos del empleado: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Salario: " << salario << endl;
}