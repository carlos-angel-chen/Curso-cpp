#include <iostream>
using namespace std;

int main()
{
    // el resto de las posiciones me las llenan de valor 0
    int matrix[10] {12,32,4};

    cout << matrix[1] << endl;
    cout << matrix[2] << endl;
    cout << matrix[9];

    // el valor que va dentro del corchete para indicar la cantidad 
    // de elementos dentro de la array, este tiene que ser constante
    const int persona = 10;
    int edades[persona] {21,45,2};

    edades[5] = 45;
    cout << edades[5] << endl;
}