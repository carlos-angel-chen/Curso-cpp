#include <iostream>
using namespace std;

int main(){
    const double precioCalidadMedia{35.5};
    const double precioCalidadAlta{55.3};
    const double iva{0.21};
    const int expiraPresupuesto{30};

    cout << "SERVICIO DE INSTALACION DE PISO FLOTANTE" << endl;
    int metrosCalidadMedia{0};
    int metrosCalidadAlta{0};

    cout << "\nCuantos metros queres instalar de calidad media?" << endl;
    cin >> metrosCalidadMedia;

    cout << "\nCuantos metros queres instalar de calidad alta?" << endl;
    cin >> metrosCalidadAlta;

    cout << "\nPresupuesto de instalacion de piso flotante:" << endl;
    cout << "Numero de metros de calidad media: " << metrosCalidadMedia << endl;
    cout << "Numero de metros de calidad alta: " << metrosCalidadAlta << endl;
    cout << "Precio de piso flotante calidad media: " << precioCalidadMedia << endl;
    cout << "Precio de piso flotante calidad alta: " << precioCalidadAlta << endl;

    cout << "IMPORTE: " << endl;
    cout << "Calidad media, precio sin impuesto: " << metrosCalidadMedia*precioCalidadMedia << endl;
    cout << "Calidad alta, precio sin impuesto: " << metrosCalidadAlta*precioCalidadAlta << endl;
    cout << "Total: " << (metrosCalidadMedia*precioCalidadMedia)+(metrosCalidadAlta*precioCalidadAlta) << endl;
    cout << "IVA total: " <<  ((metrosCalidadMedia*precioCalidadMedia)+(metrosCalidadAlta*precioCalidadAlta))*iva << endl;
    
    cout << "-------------------------------------------------" << endl;

    cout << "Precio total: " << ((metrosCalidadMedia*precioCalidadMedia)+(metrosCalidadAlta*precioCalidadAlta))+(((metrosCalidadMedia*precioCalidadMedia)+(metrosCalidadAlta*precioCalidadAlta))*iva) << endl;
}