#include <iostream>
using namespace std;

int main(){
    // Declaro las variables
    string nombre="Carlos";
    int edad {21};
    double salario;

    cout << "Introduce el salario: "; 
    cin >> salario;     //pido al usuario que ingrese el salario por consola

    cout << "Introduce la edad: ";
    cin >> edad;        //pido al usuario que ingrese la edad

    cout << "Datos del empleado: " << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Salario: " << salario << endl;
}