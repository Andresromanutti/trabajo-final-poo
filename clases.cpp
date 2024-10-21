#include "clases.h"
#include <iostream>


Noticia::Noticia(string _titulo, string _contenido, int _dia, int _anio, int _mes) {
    titulo = _titulo;
    contenido = _contenido;
    dia = _dia;
    anio = _anio;
    mes = _mes;
}

string Noticia::getTitulo() {
    return titulo;
}

string Noticia::getContenido() {
    return contenido;
}

void Noticia::getFechaPublicacion() {
    cout<<dia<<"/"<<mes<<"/"<<anio;

}

void Noticia::mostrarNoticia() {
    cout << "Titulo: " << titulo << endl;
    cout <<contenido << endl;
    cout << "Fecha de publicacion: " << dia<<"/"<<mes<<"/"<<anio << endl;
}

Autor::Autor() {
    dni = 0;
    nombre = "";
    medio = "";
}

int Autor::getDni() {
    return dni;
}

string Autor::getNombre() {
    return nombre;
}

string Autor::getMedio() {
    return medio;
}

void Autor::crearAutor() {
    cout<<"Creando Autor..."<<endl;
    cout<<"DNI: ";
    cin>>dni;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Medio: ";
    cin>>medio;
}

void Autor::agregarNoticia(Noticia _noticias) {
    noticias.push_back(_noticias);
}

void Autor::mostrarNoticias() {
    cout<<"Noticias: "<<endl;
    int i = 1;
    for(Noticia noticia : noticias) {
        cout<<i<<". "<< noticia.getTitulo()<<endl;
        i++;
    };
}
