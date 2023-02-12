//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_TENNIS_H
#define TIENDADEPORTIVA_TENNIS_H

#include "calzado.h"

class Tennis: public Calzado{
private:
    string tipoDeSuperficie;
public:
    Tennis(): Calzado(){}
    Tennis(const string &nombre, const string &referencia, const string &color, const string &marca,
           const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
           float talla, const string &tipoSuela, const string &tipoDeporte, bool conCordones,
           const string &tipoDeSuperficie);

    const string &getTipoDeSuperficie() const;

    void setTipoDeSuperficie(const string &tipoDeSuperficie);

    friend ostream &operator<<(ostream &out, Tennis &t);
};


#endif //TIENDADEPORTIVA_TENNIS_H
