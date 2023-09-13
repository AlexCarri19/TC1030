#include <iostream>
#include <string>

using namespace std;

class Figura {
    public: 
        double largo;
        double alto;

        virtual double area ();
        void obtener ();
};

void Figura :: obtener (){
    cout << "Introduce largo: ";
    cin >> largo;
    cout << "Introduce alto: ";
    cin >> alto;
}

double Figura :: area (){
    double area;
    area = largo * alto;
    return area;
}

class Rectangulo : public Figura {
    public: 
        double area ();
};

double Rectangulo :: area (){
    double a;
    a = Figura :: area ();
    cout << "El area del rectangulo es: " << a << endl;
    return a;
}

class Triangulo : public Figura {
    public: 
        double area ();
};

double Triangulo :: area (){
    double a;
    a = Figura :: area ();
    a = a/2;
    cout << "El area del triangulo es: " << a << endl;
    return a;
}

int main (){
    Figura *ptr[2];
    ptr[0] = new Rectangulo;
    ptr[1] = new Triangulo;

    cout << endl;

    cout << "Rectangulo \n";

    ptr[0] -> obtener();
    ptr[0] -> area();

    cout << "\n\n";
    cout << "Triangulo \n";

    ptr[1] -> obtener();
    ptr[1] -> area();

    cout << "\n\n";
}

