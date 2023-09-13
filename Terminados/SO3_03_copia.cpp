#include <iostream>
#include <string>

using namespace std;

class Barco{
    public:
        void pideNombre();
        int pideDias();
        int pideLargo();
        string Nombre;
        int Dias;
        int largo;
};

void Barco::pideNombre(){
    cout<<"Nombre del barco: "<<endl;
    cin>>Nombre;
};
int Barco::pideDias(){
    cout<<"Dias para finalizar: "<<endl;
    cin>>Dias;
    return Dias;
};
int Barco::pideLargo(){
    cout<<"Longitud del barco: "<<endl;
    cin>>largo;
    return largo;
};

class Velero: public Barco{
    public:
        int pideMastiles();
        int mastiles;
};

int Velero::pideMastiles(){
    cout<<"Numero de mastiles: "<<endl;
    cin>>mastiles;
    return mastiles;
};

class Deportivo: public Barco{
    public:
        int pidePotencia();
        int potencia;
};

int Deportivo::pidePotencia(){
    cout<<"Potencia del bote deportivo: "<<endl;
    cin>>potencia;
    return potencia;
};

class Yate: public Barco{
    public:
        int pidePotencia1();
        int pideCamarotes();
        int potencia1;
        int camarotes;
};

int Yate::pidePotencia1(){
    cout<<"Potencia del yate: "<<endl;
    cin>>potencia1;
    return potencia1;
};

int Yate::pideCamarotes(){
    cout<<"Numero de camarotes: "<<endl;
    cin>>camarotes;
    return camarotes;
};

int main(){
    int res;
    cout<<"Menu de alquiler de los Cabos"<<endl;
    cout<<"Que le gustaria rentar?"<<endl<<"\nVelero(1)\nDeportivo(2)\nYate(3)"<<endl;
    cin>>res;
    if(res==1){
        Velero Opc1;
        Opc1.pideNombre();
        Opc1.pideDias();
        Opc1.pideMastiles();
        Opc1.pideLargo();
        cout<<"Nombre: "<<Opc1.Nombre<<endl;
        cout<<"Estancia: "<<Opc1.Dias<<" dias"<<endl;
        cout<<"El velero cuenta con "<<Opc1.mastiles<<" mastiles"<<endl;
        cout<<"Cobro: "<<200*(10*Opc1.largo)*Opc1.Dias<<endl;
    }
    if(res==2){
        Deportivo Opc2;
        Opc2.pideNombre();
        Opc2.pideDias();
        Opc2.pidePotencia();
        Opc2.pideLargo();
        cout<<"Nombre: "<<Opc2.Nombre<<endl;
        cout<<"Estancia: "<<Opc2.Dias<<" Dias"<<endl;
        cout<<"El bote cuenta con "<<Opc2.potencia<<" CV de potencia"<<endl;
        cout<<"Cobro:"<<200*(10*Opc2.largo)*Opc2.Dias<<endl;
    }
    if(res==3){
        Yate Opc2;
        Opc2.pideNombre();
        Opc2.pideDias();
        Opc2.pideCamarotes();
        Opc2.pidePotencia1();
        Opc2.pideLargo();
        cout<<"Nombre: "<<Opc2.Nombre<<endl;
        cout<<"Estancia: "<<Opc2.Dias<<" Dias"<<endl;
        cout<<"El yate cuenta con "<<Opc2.potencia1<<" CV de potencia"<<endl;
        cout<<"El yate cuenta con "<<Opc2.camarotes<<" camarotes"<<endl;
        cout<<"Cobro: "<<200*(10*Opc2.largo)*Opc2.Dias<<endl;
    }
};
