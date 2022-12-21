#include <iostream>
using namespace std;

int main()
{
    // Declarar e inicializar arrad 2D
    int matriz1[4][5] = {12,33,45,61,23,42,12,43,12,64,70,50,31,30,45,78,98,54,23,12};
    // otra manera
    int matriz2[4][5] = {
                        {12,33,45,61,23},
                        {42,12,43,12,64},
                        {70,50,31,30,45},
                        {78,98,54,23,12}
                        };
    
    cout << matriz1[0][2];

    //reemplazo valores
    matriz2[0][2] = 1000;
    cout << matriz2[0][2];

    // relleno la matriz
    int matriz3[4][5];
    for(int fila = 0; fila<4; fila++)
    {
        for(int columna = 0; columna<5; columna++)
        {
            cin >> matriz3[fila][columna];
        }
    }

    // printeo la matriz 3
    for(int f=0; f<4; f++)
    {
        for(int c=0; c<5; c++)
        {
            cout << matriz3[f][c];
        }
        cout << endl;
    }
}