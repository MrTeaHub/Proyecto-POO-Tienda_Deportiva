//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_GUANTE_H
#define TIENDADEPORTIVA_GUANTE_H

#include "Accesorio.h"

class Guante: public Accesorio{
public:
    Guante(): Accesorio(){}
    Guante(const string &nombre, const string &referencia, const string &color, const string &marca,
           const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
           float talla);

    friend ostream &operator<<(ostream &out, Guante g);
};


#endif //TIENDADEPORTIVA_GUANTE_H
