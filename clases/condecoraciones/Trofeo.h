//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_TROFEO_H
#define TIENDADEPORTIVA_TROFEO_H

#include "Condecoracion.h"

class Trofeo: public Condecoracion{
private:
    float alto, ancho;
public:
    Trofeo(): Condecoracion(){}
    Trofeo(const string &nombre, const string &referencia, const string &color, const string &marca,
           const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
           float talla, float peso, float alto, float ancho);

    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);

    friend ostream &operator<<(ostream &out, Trofeo t);
};


#endif //TIENDADEPORTIVA_TROFEO_H
