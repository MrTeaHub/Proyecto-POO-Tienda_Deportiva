//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_ROPA_H
#define TIENDADEPORTIVA_ROPA_H

#include "../../../clases_abstractas/Producto.h"

class Ropa: public Producto{
public:
    Ropa(): Producto(){}
    Ropa(const string &nombre, const string &referencia, const string &color, const string &marca, const string &genero,
         const string &modelo, const string &material, int precio, int garantia, int stock, float talla);

    string tipoCategoria()override;
};


#endif //TIENDADEPORTIVA_ROPA_H
