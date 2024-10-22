#include <iostream>
#include <vector>
#include "clases.h"
using namespace std;

void registro(vector<Usuario>& usuarios, vector<Autor>& autores) {
    int opcion;
    cout << "Se quiere registrar como Usuario o Autor?" << endl;
    cout << "1. Registrar como Usuario" << endl;
    cout << "2. Registrar como Autor" << endl;
    cout << "3. Salir" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1: {
            Usuario user;
            user.crearUsuario();
            usuarios.push_back(user);  // Agregamos el nuevo usuario al vector
            cout << "Usuario registrado con exito." << endl;
            break;
        }
        case 2: {
            Autor autor;
            autor.crearAutor();
            autores.push_back(autor);  // Agregamos el nuevo autor al vector
            cout << "Autor registrado con exito." << endl;
            break;
        }
        case 3:
            cout << "Saliendo..." << endl;
        return;  // Finaliza la función
        default:
            cout << "Opción no válida, intente de nuevo." << endl;
        registro(usuarios, autores); // Repetimos el menú si la opción no es válida
    }

    // Después de cada registro, volvemos a mostrar el menú para más registros
    registro(usuarios, autores);
}

int main() {
    vector<Usuario> usuarios;  // Vector para almacenar los usuarios
    vector<Autor> autores;     // Vector para almacenar los autores

    registro(usuarios, autores);  // Llamamos a la función de registro

    cout << "Se han registrado " << usuarios.size() << " usuarios y " << autores.size() << " autores." << endl;

    return 0;
}
