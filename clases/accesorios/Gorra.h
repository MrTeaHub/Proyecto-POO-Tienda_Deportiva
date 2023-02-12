//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_GORRA_H
#define TIENDADEPORTIVA_GORRA_H

#include "Accesorio.h"
#include "../../interfaces/AccesoriosI.h"

class Gorra: public Accesorio, public AccesoriosI{
private:
    bool cierreAjustable;
public:
    Gorra(): cierreAjustable(true), Accesorio(){}
    Gorra(const string &nombre, const string &referencia, const string &color, const string &marca,
          const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
          float talla, bool cierreAjustable) : Accesorio(nombre, referencia, color, marca, genero, modelo, material,
                                                         precio, garantia, stock, talla),
                                               cierreAjustable(cierreAjustable) {}

    bool getCierreAjustable() const;

    void setCierreAjustable(bool cierreAjustable);

    string conCierreAjustable() override;

    friend ostream &operator<<(ostream &out, Gorra &g);
};


#endif //TIENDADEPORTIVA_GORRA_H
