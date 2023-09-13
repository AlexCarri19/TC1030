#include <iostream>

using namespace std;

class Fecha {
    private:
        int a;
        int mes;
        int dia;
    public:
        Fecha (int  , int  ,int );
        void establecerA (int);
        void establecerMes (int);
        void establecerDia (int);
        void mostrarFecha ();
        int obtenerA ();
        int obtenerMes ();
        int obtenerDia ();
};

Fecha :: Fecha (int a_ , int mes_ , int dia_){
    a = a_;
    dia = dia_;
    if (mes_ >= 1 && mes_ <= 12){
        mes = mes_;
    }
    else {
        mes = 1;
    }
}

void Fecha :: establecerA (int a_){
    a = a_;
}

void Fecha :: establecerMes (int mes_){
    int n;
    n = 0;
    if (mes_ >= 1 && mes_ <= 12){
        mes = mes_;    
    }
    else {
        cout<<"Error, mes no valido \n";
    }
    mes = 1;
}

void Fecha :: establecerDia (int dia_){
    dia = dia_;
}

int Fecha :: obtenerA (){
    return a;
}

int Fecha :: obtenerMes (){
    return mes;
}

int Fecha :: obtenerDia (){
    return dia;
}

void Fecha :: mostrarFecha (){
    cout << a << "/";
    cout << mes << "/";
    cout << dia << endl;
}

int main (){
    Fecha fe1(2002 , 15 , 15);
    fe1.mostrarFecha();
    fe1.establecerA(2005);
    fe1.establecerMes(15);
    fe1.establecerDia(15);
    cout<<(fe1.obtenerA())<<"/";
    cout<<(fe1.obtenerMes())<<"/";
    cout<<(fe1.obtenerDia())<<endl;
}