#include "clases.h"
#include <iostream>


Comentario::Comentario() {
    id = 0;
    texto ="";

}

string Comentario::getTexto() {
    return texto;
}

void Comentario::escribirTexto() {
    cout << "Escribir Comentario: "<<endl;
    cin>>texto;
}

Usuario::Usuario() {
    dni = 0;
    nombre ="";
    edad = 0;
}

int Usuario::getDNI() {
    return dni;
}

string Usuario::getNombre() {
    return nombre;

}

int Usuario::getEdad() {
    return edad;

}

void Usuario::setDNI(int _dni) {
    dni = _dni;

}

void Usuario::setNombre(string _nombre) {
    nombre = _nombre;
}

void Usuario::setEdad(int _edad) {
    edad = _edad;
}

void Usuario::comentar() {
    Comentario co;
    co.escribirTexto();


}

void Usuario::crearUsuario() {
    cout<<"Creando Usuario"<<endl;
    cout<<"DNI: ";
    cin>>dni;
    cout<<"Nombre: ";
    cin>>nombre;
    cout<<"Edad: ";
    cin>>edad;
}

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
