//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_MEDALLA_H
#define TIENDADEPORTIVA_MEDALLA_H

#include "Condecoracion.h"

class Medalla: public Condecoracion{
private:
    float diametro;
public:
    Medalla(): Condecoracion(){}

    Medalla(const string &nombre, const string &referencia, const string &color, const string &marca,
            const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
            float talla, float peso, float diametro) : Condecoracion(nombre, referencia, color, marca, genero, modelo,
                                                                     material, precio, garantia, stock, talla, peso),
                                                       diametro(diametro) {}

    float getDiametro() const;

    void setDiametro(float diametro);

    friend ostream &operator<<(ostream &out, Medalla &m);
};


#endif //TIENDADEPORTIVA_MEDALLA_H
