//
// Created by VILL on 12/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_VENDEDOR_H
#define TIENDA_DEPORTIVA_MAIN_VENDEDOR_H


#include "../clases_abstractas/Usuario.h"
#include "../interfaces/Menu.h"

class Vendedor: public Usuario, public Menu{
private:
string nombreVendedor;
public:
Vendedor();
Vendedor(string correoUsuario, string contrasena, string nombreVendedor);

string &getNombreVendedor();
void setNombreVendedor(const string &nombreVendedor);

int menu()override;
int getTipoUsuario()override;
void print(ostream& out)override;


    friend ostream &operator<<(ostream &os, Vendedor *vendedor);
};


#endif //TIENDA_DEPORTIVA_MAIN_VENDEDOR_H
