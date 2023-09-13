#include <iostream>
#include <string>

using namespace std;

class embarcacion {
    protected:
        int dias;
        int alquiler;
        int largo;
        string nombre;
    public:
        void datos ();
        void mostrar ();
};

void embarcacion :: datos (){
    cout << "Introduce tu nombre: ";
    cin >> nombre;
    cout << "Introduce los dias de alquiler: ";
    cin >> dias;
    cout << "Introduce el largo: ";
    cin >> largo;
}

void embarcacion :: mostrar (){
    alquiler = dias*10*largo*200;

    cout << "\nNombre: " << nombre << endl;
    cout << "\nDias: " << dias << endl;
    cout << "\nLargo: " << largo << endl;
    cout << "\nAlquiler: "<< alquiler <<endl;
}

class velero : public embarcacion {
    protected:
        int mastiles;
    public:
        void datosV ();
        void mostrarV ();
};

void velero :: datosV() {
    datos ();
    cout << "Numero de mastiles: ";
    cin >> mastiles; 
}

void velero :: mostrarV (){
    mostrar();
    cout << "\nNumero de Mastiles: " << mastiles << endl;
}

class deportivo : public embarcacion{
    protected:
        int potencia; 
    public:
        void datosD ();
        void mostrarD ();
};

void deportivo :: datosD (){
    datos ();
    cout << "Potencia: ";
    cin >> potencia; 
}

void deportivo :: mostrarD (){
    mostrar ();
    cout << "\nPotencia: " << potencia << endl;
}

class yate : public embarcacion{
    protected:
        int potencia; 
        int camarotes;
    public:
        void datosY ();
        void mostrarY ();
};

void yate :: datosY (){
    datos ();
    cout << "Potencia: ";
    cin >> potencia; 
    cout << "camarotes: ";
    cin >> camarotes; 
}

void yate :: mostrarY (){
    mostrar ();
    cout << "\nPotencia: " << potencia << endl;
    cout << "\nCamarotes: " << camarotes << endl;
}

int main (){
    int ans = 0;
    int res;
    while (ans < 1){
        cout << "Bienvenidos al Puerto los Cabos\n";
        cout << "Que tipo de embarcacion desea registrar\n";
        cout << "1. Velero \n2. Deportivo \n3. Yate\n";
        cin >> res;
        if (res == 1){
            velero obj1;
            obj1.datosV ();
            cout << "\n \n \n";
            obj1.mostrarV ();
            ans ++;
        }
        else if (res == 2){
            deportivo obj2;
            obj2.datosD ();
            cout << "\n \n \n";
            obj2.mostrarD ();
            ans ++;
        }
        else if (res == 3){
            yate obj3;
            obj3.datosY ();
            cout << "\n \n \n";
            obj3.mostrarY ();
            ans ++;
        }
        else {
            cout << "Error, numero invalido \n";
        }
        cout << "\nMuchas gracias\n";
    }
}