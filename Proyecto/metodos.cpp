#include "class.h"

Video :: Video (string t, string n, string g , int c , int a, int d){
    tipoVideo = t;
    nombreVideo = n;
    genero = g;
    calificacion = c;
    anLanzamiento = a;
    duracionH = d;
}

void Video :: set_cali (){
    cout << "Calificacion del video: ";
    cin >> calificacion;
}

void Video :: muestraDatos (){
    cout << "\n\n";
    cout << "Tipo de Video: " << tipoVideo << endl;
    cout << "Nombre: " << nombreVideo << endl;
    cout << "Genero: " << genero << endl;
    cout << "Calificacion: " << calificacion << endl;
    cout << "Anio de lanzamiento: " << anLanzamiento << endl;
    cout << "Duracion del Video: " << duracionH << " minutos" << endl;
}

string Video :: get_tipo (){
    return tipoVideo;
}

int Video :: get_cali (){
    return calificacion;
}

string Video :: get_nombre (){
    return nombreVideo;
}

//-------------------------------------------------

Serie :: Serie (string t, string n, string g , int c , int a, int d , string n_, int te, int ep) : Video (t,n,g,c,a,d) {
    nomEpisodio = n_;
    temporada = te;
    episodio = ep;
}

void Serie :: muestraDatos (){
    Video :: muestraDatos ();
    cout << "Nombre del episodio: " << nomEpisodio << endl;
    cout << "Episodio: " << episodio << endl;
    cout << "Temporada: " << temporada << endl;
    cout << "\n\n";
}

//-------------------------------------------------

Pelicula :: Pelicula (string t, string n, string g , int c , int a, int d , string nom) : Video (t,n,g,c,a,d) {
    nominaciones = nom;
}

void Pelicula :: muestraDatos (){
    Video :: muestraDatos ();
    cout << "Nominaciones: " << nominaciones << endl;
    cout << "\n\n";
}

//-------------------------------------------------

Stream :: Stream (){
    numVideos = 0;
}

void Stream :: crearEj (){
    video[numVideos] = new Serie ("Serie", "Clone Wars" , "Animado" , 5 , 2005 , 20 , "Amanecer" , 1 ,1);
    numVideos++;
    video[numVideos] = new Serie ("Serie" , "Elementary" , "Policias" , 5 , 2007 , 45 , "La dama" , 1 ,2);
    numVideos++;
    video[numVideos] = new Serie ("Serie", "Calculus" , "Informativo" , 4 , 2000 , 60 , "Calculo Elemental" , 1, 3);
    numVideos++;
    video[numVideos] = new Pelicula ("Pelicula" , "Vanquish" , "Comedia" , 4 , 2015 , 120 , "Mejor Comedia");
    numVideos++;
    video[numVideos] = new Pelicula ("Pelicula" , "Dorime" , "Drama" , 3 , 2007 , 95 , "Ninguna");
    numVideos++;
}

void Stream :: mostrarS (){
    cout << "\nSeries:\n";
    for (int i = 0 ; i <= numVideos ; i++){
        if (video[i]->get_tipo() == "Serie"){
            video[i]->muestraDatos();
            cout << "\n";
        }
    }
}

void Stream :: mostrarP (){
    cout << "\nPeliculas:\n";
    for (int i = 0 ; i <= numVideos ; i++){
        if (video[i]->get_tipo() == "Pelicula"){
            video[i]->muestraDatos();
            cout << "\n";
        }
    }
}


void Stream :: buscarCali (){
    int c;
    cout << "Que calificacion buscas del 1 al 5? ";
    cin >> c;
    for (int i = 0 ; i <= numVideos ; i++){
        if (video[i]->get_cali() == c){
            video[i]->muestraDatos();
            cout << "\n";
        }
    }
}

void Stream :: calificaVideos (){
    string nom;
    cout << "Nombre de la serie a calificar: ";
    cin >> nom;
    for (int i = 0 ; i <= numVideos ; i++){
        if (video[i]->get_nombre() == nom){
            video[i]->set_cali();
            cout << "\n";
            video[i]->muestraDatos();
        }
    }
}