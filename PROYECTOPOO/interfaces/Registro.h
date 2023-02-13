//
// Created by VILL on 12/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_REGISTRO_H
#define TIENDA_DEPORTIVA_MAIN_REGISTRO_H


#include <iostream>
#include <vector>

using namespace std;

class Registro{
public:
    virtual string validarContrasena()=0;
    virtual string validarRegistro()=0;
};

#endif //TIENDA_DEPORTIVA_MAIN_REGISTRO_H
