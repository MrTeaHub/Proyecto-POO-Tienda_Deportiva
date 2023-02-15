//
// Created by VILL on 11/02/2023.
//



#include "Usuario.h"

    //CONSTRUCTORES USUARIO
    Usuario::Usuario(): correoUsuario(""), contrasena(""){}
    Usuario::Usuario(const string &correoUsuario, const string &contrasena) : correoUsuario(correoUsuario),
                                                                              contrasena(contrasena) {}

    //GETTER Y SETTERS USUARIO
    string &Usuario::getCorreoUsuario()  {
        return correoUsuario;
    }
    void Usuario::setCorreoUsuario( string &nombreUsuario) {
        Usuario::correoUsuario = nombreUsuario;
    }

    string &Usuario::getContrasena()  {
        return contrasena;
    }
    void Usuario::setContrasena( string &contrasena) {
        Usuario::contrasena = contrasena;
    }


ostream &operator<<(ostream &os, Usuario *usuario) {
    os << "Correo del Usuario: \t" << usuario->getCorreoUsuario() << endl;
    os << "Contrasena: \t\t" << usuario->getContrasena() << endl;
    usuario->print(os);
    return os;
}




