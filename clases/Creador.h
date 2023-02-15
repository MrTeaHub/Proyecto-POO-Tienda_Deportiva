//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_CREADOR_H
#define TIENDADEPORTIVA_CREADOR_H

#include <iostream>
#include "../clases_abstractas/Usuario.h"
#include "../interfaces/Menu.h"

using namespace std;

class Creador: public Usuario, public Menu{
private:
    string rango;
public:
    Creador();
    Creador(string correoUsuario, string contrasena, string rango);

    //GETTERS Y SETTERS
    const string &getRango() const;
    void setRango(const string &rango);


    int menu()override;
    int getTipoUsuario()override;
    void print(ostream& out)override;
};


#endif //TIENDADEPORTIVA_CREADOR_H
