#include <iostream>
#include <math.h>

using namespace std;

class Padre {
    protected:
        int grados;
        int minutos;
        int segundos;
    public: 
        Padre (int ,int , int);
        virtual void bienvenida ();
        virtual void mostrar ();

        Padre operator + (Padre f){
            Padre n(0 , 0 , 0);
            
            n.segundos = segundos + f.segundos;
            if (n.segundos < 0 || n.segundos >60){
                n.segundos = n.segundos - 60;
                n.minutos = n.minutos + 1;
            }

            n.minutos = minutos + f.minutos + n.minutos;
            if (n.minutos < 0 || n.minutos >60){
                n.minutos = n.minutos - 60;
                n.grados = n.grados + 1;
            }

            n.grados = grados + f.grados + n.grados;
            if (n.grados < 0 || n.grados >360){
                n.grados = n.grados - 60;
            }

            return n;
        }
};

Padre :: Padre (int g , int m , int s){
    grados = g;
    minutos = m;
    segundos = s;
}

void Padre :: bienvenida (){
    cout << "Bienvenido a Padre" << endl;
}

void Padre :: mostrar (){
    cout << "Grados: " << grados << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "Segundos: " << segundos << endl;
}

class Hija : public Padre {
    private:
        int ciclos;
    public: 
        Hija (int , int , int , int);
        void bienvenida ();
        void mostrar ();
};

Hija :: Hija (int g , int m , int s , int c) : Padre (g , m , s){
    ciclos = c;
}

void Hija :: bienvenida (){
    Padre :: bienvenida ();
    cout << "Bienvenido a Hija" << endl;
}

void Hija :: mostrar(){
    cout << "Ciclos: " << ciclos << endl;
    Padre :: mostrar ();
}

int main (){
    int c , g , m ,s;

    cout << "Introduce los valores. \nGrados: ";
    cin >> g;
    cout << "Minutos: ";
    cin >> m;
    cout << "Segundos: ";
    cin >> s;

    if (g<0 || g>359){
        g = 0;
    }

    else if (m<0 || m>59){
        m = 0;
    }

    else if (s<0 || s>59){
        s = 0;
    }

    Padre p(g , m , s);
    Padre p1(1 , 20 , 55);
    Padre p2(0 , 0 , 0);

    p2 = p + p1;
    p2.mostrar();

    cout << "Introduce los valores. \nNumero de Ciclos: ";
    cin >> c;
    cout << "Grados: ";
    cin >> g;
    cout << "Minutos: ";
    cin >> m;
    cout << "Segundos: ";
    cin >> s;

    if (c<=0){
        c = 1;
        g = 0;
        m = 0;
        s = 0;
    }
    
    else if (g<0 || g>359){
        c = 1;
        g = 0;
        m = 0;
        s = 0;
    }

    else if (m<0 || m>59){
        c = 1;
        g = 0;
        m = 0;
        s = 0;
    }

    else if (s<0 || s>59){
        c = 1;
        g = 0;
        m = 0;
        s = 0;
    }

    

    Padre*h = new Hija (g , m , s, c);

    h->bienvenida();
    h->mostrar();

}