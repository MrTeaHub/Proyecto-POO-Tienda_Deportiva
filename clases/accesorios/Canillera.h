//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_CANILLERA_H
#define TIENDADEPORTIVA_CANILLERA_H

#include "Accesorio.h"

class Canillera: public Accesorio{
public:
    Canillera(): Accesorio(){}
    Canillera(const string &nombre, const string &referencia, const string &color, const string &marca,
              const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
              float talla);

    friend ostream &operator<<(ostream &out, Canillera &a);
};


#endif //TIENDADEPORTIVA_CANILLERA_H
