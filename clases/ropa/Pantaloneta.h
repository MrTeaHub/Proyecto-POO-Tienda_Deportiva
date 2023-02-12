//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_PANTALONETA_H
#define TIENDADEPORTIVA_PANTALONETA_H

#include "Ropa.h"
#include "../../clases_abstractas/RopaDeportiva.h"

class Pantaloneta: public Ropa, public RopaDeportiva{
private:
    int numeroDeBolsillos;
public:
    Pantaloneta();

    Pantaloneta(const string &nombre, const string &referencia, const string &color, const string &marca,
                const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
                float talla, const string &tipoDeporte, const string &nombreEquipo, bool equipo, int numeroDeBolsillos);

    int getNumeroDeBolsillos() const;

    void setNumeroDeBolsillos(int numeroDeBolsillos);

    string conjuntoCamisetaPantaloneta()override;

    friend ostream &operator<<(ostream &out, Pantaloneta &p);
};


#endif //TIENDADEPORTIVA_PANTALONETA_H
