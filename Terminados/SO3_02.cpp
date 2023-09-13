#include <iostream>
#include <string>

using namespace std;

class Vehiculos {
    public:
        string marca;
        string modelo;
        int a;
        double precio;

        Vehiculos (string , string , int , double );
        void mostrar1 ();
};

class autos : public Vehiculos{
    public:
        int pasajeros;

        autos (string , string , int , double , int);
        void mostrar ();
};

class vagonetas : public autos{
    public:
        vagonetas (string , string , int , double ,int);
        void mostrar ();
};

class autos_lujo : public autos{
    public:
        string tipo;

        autos_lujo (string , string , int , double , int , string);
        void mostrar ();
};

class camionetas : public Vehiculos{
    public:
        double peso_max;
        int num_ejes;

        camionetas (string , string , int , double , double , int);
        void mostrar ();
};

Vehiculos :: Vehiculos (string m , string mo, int a_, double p){
    marca = m;
    modelo = mo;
    a = a_;
    precio = p;
}

void Vehiculos :: mostrar1 (){
    cout << "Marca: " << marca<< endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << a << endl;
    cout << "Precio: " << precio << endl;
}

autos :: autos (string m , string mo, int a_, double p, int pa) : Vehiculos (m , mo, a_, p){
    pasajeros = pa;
}

void autos :: mostrar (){
    cout << "\nAuto compacto" << endl;
    cout << "Marca: " << marca<< endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << a  << endl;
    cout << "Precio: " << precio << endl;
    cout << "Numero de pasajeros: " << pasajeros << endl;
}

vagonetas :: vagonetas (string m , string mo, int a_, double p, int pa) : autos (m , mo, a_, p , pa){
}

void vagonetas :: mostrar (){
    cout << "\nVagoneta" << endl;
    cout << "Marca: " << marca<< endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << a  << endl;
    cout << "Precio: " << precio << endl;
    cout << "Numero de pasajeros: " << pasajeros << endl;
}

autos_lujo :: autos_lujo (string m , string mo, int a_, double p, int pa , string t) : autos (m , mo, a_, p , pa){
    tipo = t;
}

void autos_lujo :: mostrar(){
    cout << "\nAuto de lujo" << endl;
    cout << "Marca: " << marca<< endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << a  << endl;
    cout << "Precio: " << precio << endl;
    cout << "Numero de pasajeros: " << pasajeros << endl;
    cout << "Tipo: " << tipo << endl;
}

camionetas :: camionetas (string m , string mo, int a_, double p, double pe, int e) : Vehiculos (m , mo , a_ , p){
    peso_max = pe;
    num_ejes = e;
}

void camionetas :: mostrar (){
    cout << "\nCamioneta" << endl;
    cout << "Marca: " << marca<< endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Año: " << a  << endl;
    cout << "Precio: " << precio << endl;
    cout << "Peso maximo: " << peso_max << endl;
    cout << "Numeor de ejes: " << num_ejes << endl;
}

int main (){
    autos obj1("VW", "Polo" , 2021 , 56000.12 , 5);
    obj1.mostrar();
    vagonetas obj2("VW" , "Caddy" , 2021 , 85000.56 , 6);
    obj2.mostrar();
    autos_lujo obj3 ("Aston Martin", "Vakyrie" , 2021 , 2000000.56 , 2 , "Hibrido");
    obj3.mostrar();
    camionetas obj4 ("Alternet" , "Base" , 2019 , 800000.0 , 5000.0 , 4);
    obj3.mostrar();

}