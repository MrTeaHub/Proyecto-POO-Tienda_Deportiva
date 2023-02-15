//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_CAMISETA_H
#define TIENDADEPORTIVA_CAMISETA_H

#include "Ropa.h"
#include "../../../clases_abstractas/RopaDeportiva.h"


class Camiseta: public Ropa, public RopaDeportiva{
private:
    string tipoDeCuello;
public:
    Camiseta();
    Camiseta(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
             float talla, const string &tipoDeporte, const string &nombreEquipo, bool equipo,
             const string &tipoDeCuello);

    const string &getTipoDeCuello() const;

    void setTipoDeCuello(const string &tipoDeCuello);

    string conjuntoCamisetaPantaloneta()override;

    friend ostream &operator<<(ostream &out, Camiseta *c);
};


#endif //TIENDADEPORTIVA_CAMISETA_H
