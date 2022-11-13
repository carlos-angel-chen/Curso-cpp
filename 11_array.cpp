#include <iostream>
using namespace std;

int main(){
    // declaro un array y le tengo que indicar tambien la cant de elemento
    int array1 [5];

    int array2[5] {15,25,8,-1,3};

    // automaticamente el resto de los elementos son de valor 0
    int array3[5] {12,5};

    const int salarios {20};
    double array4[salarios] {2334,21};

    // se asume que solamente tiene 3 posiciones
    int array5[] {12, 3, 4};
}