//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_MEDIA_H
#define TIENDADEPORTIVA_MEDIA_H

#include "Ropa.h"

class Media: public Ropa{
private:
    string tipoDeLargo;
public:
    Media();
    Media(const string &nombre, const string &referencia, const string &color, const string &marca,
          const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
          float talla, const string &tipoDeLargo);

    const string &getTipoDeLargo() const;

    void setTipoDeLargo(const string &tipoDeLargo);

    friend ostream &operator<<(ostream &out, Media &m);
};


#endif //TIENDADEPORTIVA_MEDIA_H
