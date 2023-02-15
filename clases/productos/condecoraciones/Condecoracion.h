//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_CONDECORACION_H
#define TIENDADEPORTIVA_CONDECORACION_H

#include "../../../clases_abstractas/Producto.h"

class Condecoracion: public Producto{
private:
    float peso;
public:
    Condecoracion(): Producto(), peso(0.0){}

    Condecoracion(const string &nombre, const string &referencia, const string &color, const string &marca,
                  const string &genero, const string &modelo, const string &material, int precio, int garantia,
                  int stock, float talla, float peso);

    float getPeso() const;

    void setPeso(float peso);

    string tipoCategoria() override;

    friend ostream &operator<<(ostream &out, Condecoracion &c);
};


#endif //TIENDADEPORTIVA_CONDECORACION_H
