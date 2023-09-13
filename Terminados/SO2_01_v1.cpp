#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class circulo{
    private:
        double radio;
    public:
        circulo(double radio){
            void getRadio();
        }
        void getRadio(){
            double radio_1;
            cout<<"Cual es el radio de tu circulo : \n";
            cin>>radio_1;
            radio = radio_1;
        }
        double area(){
            double res;
            res = (3.1416) * pow(radio , 2.0);
            return (res);
        }
        double perimetro (){
            double res;
            res = (3.1416) * 2 * radio;
            return res;
        }        
};

int main (){
    circulo c1(0.0);
    c1.getRadio();
    cout << "Area: " << c1.area() << endl;
    cout << "Perimetro: " << c1.perimetro()<< endl;

}