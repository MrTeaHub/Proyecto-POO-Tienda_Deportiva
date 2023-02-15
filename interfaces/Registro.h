//
// Created by USUARIO on 14/02/2023.
//

#ifndef TIENDADEPORTIVA_REGISTRO_H
#define TIENDADEPORTIVA_REGISTRO_H

#include <iostream>
#include <vector>

using namespace std;

class Registro {
    virtual string validarContrasena()=0;
    virtual string validarRegistro()=0;
};


#endif //TIENDADEPORTIVA_REGISTRO_H
