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
                n.denominador = denominador ;
            }

            else {
                n.numerador = numerador*f.denominador - f.numerador*denominador;
                n.denominador = denominador * f.denominador;
            }

            return n;
        }

        Fraccion operator * (Fraccion &f){
            Fraccion n(0 , 0);
            n.numerador = this -> numerador * f.numerador;
            n.denominador = this -> denominador * f.denominador;
            return n;
        }

        bool operator == (Fraccion f){
            Fraccion n(1 , 1);
            if (n.denominador == f.denominador ){
                if (n.numerador == f.numerador){
                    cout << "Son iguales \n\n";
                }
            }
            else {
                cout << "No son iguales \n\n";
            }
            return 0;
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
    Fraccion f1(10 , 20) , f2(10 , 20);
    Fraccion f3 (0 , 0);

    cout << "\n\nBool \n\n";

    f1 == f2;
}