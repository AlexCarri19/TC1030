#include <iostream>

using namespace std;

class Complejos{
    public:
        int a;
        int b;

        Complejos (int , int);
        void mostrar ();
        Complejos operator + (Complejos f){
            Complejos n(0 , 0);
            n.a = a + f.a;
            n.b = b + f.b;
            return n;
        }
        Complejos operator - (Complejos f){
            Complejos n(0 , 0);
            n.a = a - f.a;
            n.b = b - f.b;  
            return n;          
        }
        Complejos operator * (Complejos f){
            Complejos n(0 , 0);
            n.a = (a*f.a) - (b*f.b);
            n.b = (a*f.b) - (b*f.a);
            return n;
        }
        Complejos operator / (Complejos f){
            Complejos n(0 , 0);
            n.a = ((a*f.a + b*f.b)/(f.a^2 + b^2));
            n.b = ((-a*f.b + b*f.a)/(f.a^2 + b^2));
            return n;
        }
        Complejos operator * (int x){//Producto por escalar 
            Complejos n(0 , 0);
            n.a = a*x;
            n.b = b*x;
            return n;
        }
};

void Complejos :: mostrar (){
    cout << "\n\n";
    cout << "A es igual a: " << a << endl;
    cout << "B es igual a: " << b << endl;
    cout << "\n\n";
}

Complejos :: Complejos (int n , int d){
    a = n;
    b = d;
}

int main (){
    Complejos f1(5 , 2) , f2(3 , 3);
    Complejos f3 (0 , 0);

    f3 = f1 + f2;
    f3.mostrar();

    f3 = f1 - f2;
    f3.mostrar();
    
    f3 = f1 * f2;
    f3.mostrar();

    f3 = f1 / f2;
    f3.mostrar();

    f3 = f1 * 2;
    f3.mostrar();
}