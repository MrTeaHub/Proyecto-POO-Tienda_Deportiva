//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_CLIENTE_H
#define TIENDADEPORTIVA_CLIENTE_H


#include <iostream>
#include <vector>
#include "../CLASES_ABSTRACTAS/Usuario.h"
#include "../INTERFACES/Menu.h"

using namespace std;


class Cliente: public Usuario, public Menu{
private:
    string nombreCliente;
public:
    Cliente();
    Cliente(string correoUsuario, string contrasena, string nombreCliente);

    const string &getNombreCliente() const;

    void setNombreCliente(const string &nombreCliente);

    int menu()override;
    int getTipoUsuario()override;
    void print(ostream& out)override;

};


#endif //TIENDADEPORTIVA_CLIENTE_H
