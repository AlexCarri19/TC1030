#include <iostream>

using namespace std;

class Fraccion{
    public:
        int numerador;
        int denominador;

        Fraccion (int , int);
        void mostrar ();
        Fraccion operator - (Fraccion f){
            Fraccion n(0 , 0);
            if (denominador == f.denominador){
                n.numerador = numerador - f.numerador;
                n.denominador = denominador;

            }

            else {
                n.numerador = numerador*f.denominador - f.numerador*denominador;
                n.denominador = denominador * f.denominador;
            }

            return n;
        }
};

void Fraccion :: mostrar (){
    cout << "El numerador es: " << numerador << endl;
    cout << "El denominador es: " << denominador << endl;
}

Fraccion :: Fraccion (int n , int d){
    numerador = n;
    denominador = d;
}

int main (){
    Fraccion f1(5 , 2) , f2(3 , 3);
    Fraccion f3 (0 , 0);

    f3 = f1 - f2;

    f3.mostrar();
}