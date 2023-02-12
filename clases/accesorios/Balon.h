//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_BALON_H
#define TIENDADEPORTIVA_BALON_H

#include "Accesorio.h"

class Balon: public Accesorio{
private:
    float diametro;
public:
    Balon(): diametro(){}
    Balon(const string &nombre, const string &referencia, const string &color, const string &marca,
          const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
          float talla, float diametro);

    float getDiametro() const;

    void setDiametro(float diametro);

    friend ostream &operator<<(ostream &out, Balon &b);
};


#endif //TIENDADEPORTIVA_BALON_H
