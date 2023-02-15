//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_ACCESORIO_H
#define TIENDADEPORTIVA_ACCESORIO_H

#include "../../../clases_abstractas/Producto.h"

class Accesorio: public Producto{
public:
    Accesorio(): Producto(){}

    Accesorio(const string &nombre, const string &referencia, const string &color, const string &marca,
              const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
              float talla);

    string tipoCategoria() override;

    friend ostream &operator<<(ostream &out, Accesorio &a);
};


#endif //TIENDADEPORTIVA_ACCESORIO_H
