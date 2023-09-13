#include <iostream>
#include <string>

using namespace std;

class Transporte {
    public: 
        int numPas;
        string marca;

        Transporte (string , int);
        virtual void modelo ();
};

Transporte :: Transporte (string m , int n){
    numPas = n;
    marca = m;
}

void Transporte :: modelo (){
    cout << "\n\n";
    cout << "Marca: " << marca << endl;
    cout << "Numero de pasajeros: " << numPas << endl;
}

class Moto : public Transporte{
    public: 
        float precio;

        Moto (string , int , float);
        void modelo ();
};

Moto :: Moto (string m , int n , float p) : Transporte (m,n){
    precio = p;
} 

void Moto :: modelo (){
    Transporte :: modelo ();
    cout << "Precio: " << precio << endl;
    cout << "\n";
}

class Camion : public Transporte {
    public: 
        float ton;

        Camion (string , int , float);
        void modelo ();
};

Camion :: Camion (string m , int p , float t) : Transporte (m , p){
    ton = t;
}

void Camion :: modelo (){
    Transporte :: modelo ();
    cout << "Toneladas: " << ton << endl;
    cout << "\n";
}

int main (){
    Transporte *ptr[3];

    ptr[0] = new Transporte ("Lamborghini" , 2);
    ptr[1] = new Moto ("Honda" , 2 , 50000.05);
    ptr[2] = new Camion ("Alternet" , 50 , 2.5);

    ptr[0] -> modelo ();
    ptr[1] -> modelo ();
    ptr[2] -> modelo ();
}