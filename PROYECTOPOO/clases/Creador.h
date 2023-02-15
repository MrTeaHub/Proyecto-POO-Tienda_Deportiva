//
// Created by VILL on 12/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_CREADOR_H
#define TIENDA_DEPORTIVA_MAIN_CREADOR_H

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


#endif //TIENDA_DEPORTIVA_MAIN_CREADOR_H
