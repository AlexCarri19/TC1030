#include <iostream>
#include <math.h>


using namespace std;

circulo :: circulo (double radio){
    void getRadio();
}

void circulo :: getRadio(){
    double radio_1;
    cout<<"Cual es el radio de tu circulo : \n";
    cin>>radio_1;
    radio = radio_1;
}

double circulo :: area(){
    double res;
    res = (3.1416) * pow(radio , 2.0);
    return (res);
}

double circulo :: perimetro (){
    double res;
    res = (3.1416) * 2 * radio;
    return res;
}