//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_ROPADEPORTIVA_H
#define TIENDADEPORTIVA_ROPADEPORTIVA_H

#include <iostream>

using namespace std;

class RopaDeportiva {
private:
    string tipoDeporte, nombreEquipo;
    bool equipo;
public:
    RopaDeportiva(): equipo(true){}
    RopaDeportiva(const string &tipoDeporte, const string &nombreEquipo, bool equipo);

    const string &getTipoDeporte() const;

    void setTipoDeporte(const string &tipoDeporte);

    const string &getNombreEquipo() const;

    void setNombreEquipo(const string &nombreEquipo);

    bool getEquipo() const;

    void setEquipo(bool equipo);

    virtual string conjuntoCamisetaPantaloneta()=0;

    friend ostream &operator<<(ostream &out, RopaDeportiva &r);
};


#endif //TIENDADEPORTIVA_ROPADEPORTIVA_H
