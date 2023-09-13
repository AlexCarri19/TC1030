#include <iostream>
#include <math.h>

using namespace std;

class circulo{
    private:
        double radio;
    public:
        circulo(double radio);
        void getRadio();
        double area();
        double perimetro ();        
};