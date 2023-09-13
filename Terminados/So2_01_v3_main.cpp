#include <iostream>
#include <math.h>
#include "SO2_01_v3_clases.h"
#include "SO2_01_v3_metodos.h"

using namespace std;

int main (){
    circulo c1(0.0);
    c1.getRadio();
    cout << "Area: " << c1.area() << endl;
    cout << "Perimetro: " << c1.perimetro()<< endl;
}