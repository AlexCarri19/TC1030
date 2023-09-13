#include "metodos.cpp"

int main (){
    int opc1;

    Stream Servicio;
    Servicio.crearEj ();
    
    for (int i = 0; i < 50 ; i++){

        cout << "Desea \nCalificar videos (1) \nVer las series(2)\nVer las Peliculas(3)\nBuscar por calificacion(4)\nOpcion: ";
        cin >> opc1;

        if (opc1 == 1){
            Servicio.calificaVideos();
            break;
        }
        else if (opc1 == 2){
            Servicio.mostrarS();
            break;
        }

        else if (opc1 == 3){
            Servicio.mostrarP();
            break;
        }

        else if (opc1 == 4){
            cout << "\n\n";
            Servicio.buscarCali();
            break;
        }
        else {
            cout << "Opcion Invalida..."<< endl;
            cout << "\n\n";
        }
    }
}