//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_LICRA_H
#define TIENDADEPORTIVA_LICRA_H

#include "Ropa.h"
#include "../../interfaces/LicraI.h"


class Licra: public Ropa, public LicraI{
private:
    bool secadoRapido, proteccionUV;
public:
    Licra();
    Licra(const string &nombre, const string &referencia, const string &color, const string &marca,
          const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
          float talla, bool secadoRapido, bool proteccionUv);

    bool isSecadoRapido() const;

    void setSecadoRapido(bool secadoRapido);

    bool isProteccionUv() const;

    void setProteccionUv(bool proteccionUv);

    string conSecadoRapido() override;
    string conProteccionUV() override;

    friend ostream &operator<<(ostream &out, Licra &l);
};


#endif //TIENDADEPORTIVA_LICRA_H
