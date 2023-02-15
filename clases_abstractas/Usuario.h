//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_USUARIO_H
#define TIENDADEPORTIVA_USUARIO_H

#include <iostream>
#include <vector>

using namespace std;


class Usuario {
private:
    string correoUsuario;
    string contrasena;

public:
    //CONSTRUCTORES USUARIO
    Usuario();
    Usuario(const string &correoUsuario, const string &contrasena);

    //METODOS USUARIO
    virtual int getTipoUsuario()=0;
    virtual void print(ostream &out)=0;

    //GETTERS Y SETTERS USUARIO
    string &getCorreoUsuario() ;
    void setCorreoUsuario(string &nombreUsuario);

    string &getContrasena() ;
    void setContrasena( string &contrasena);


    //SOBRECARGA
    friend ostream &operator<<(ostream &os, Usuario *usuario);
};


#endif //TIENDADEPORTIVA_USUARIO_H
