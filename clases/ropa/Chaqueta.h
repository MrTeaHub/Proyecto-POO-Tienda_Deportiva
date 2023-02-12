//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_CHAQUETA_H
#define TIENDADEPORTIVA_CHAQUETA_H

#include "Ropa.h"
#include "../../interfaces/ChaquetaI.h"

class Chaqueta: public Ropa, public ChaquetaI{
private:
    int numeroDeBolsillos;
    bool capucha, impermeable;
public:
    Chaqueta();
    Chaqueta(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
             float talla, int numeroDeBolsillos, bool capucha, bool impermeable);

    int getNumeroDeBolsillos() const;

    void setNumeroDeBolsillos(int numeroDeBolsillos);

    bool getCapucha() const;

    void setCapucha(bool capucha);

    bool getImpermeable() const;

    void setImpermeable(bool impermeable);

    string conCapucha() override;
    string conImpermeabilidad()override;

    friend ostream &operator<<(ostream &out, Chaqueta &c);
};


#endif //TIENDADEPORTIVA_CHAQUETA_H
