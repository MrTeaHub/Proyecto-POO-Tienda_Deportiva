//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_CALZADO_H
#define TIENDADEPORTIVA_CALZADO_H

#include "../../../clases_abstractas/Producto.h"
#include "../../../interfaces/CalzadoI.h"

class Calzado: public Producto, public CalzadoI{
private:
    string tipoSuela, tipoDeporte;
    bool conCordones;
public:
    Calzado(): Producto(){}
    Calzado(const string &nombre, const string &referencia, const string &color, const string &marca,
            const string &genero, const string &modelo, const string &material, int precio, int garantia, int stock,
            float talla, const string &tipoSuela, const string &tipoDeporte, bool conCordones);

    const string &getTipoSuela() const;

    void setTipoSuela(const string &tipoSuela);

    const string &getTipoDeporte() const;

    void setTipoDeporte(const string &tipoDeporte);

    bool getConCordones() const;

    void setConCordones(bool conCordones);

    string tipoCategoria()override;

    string cordones() override;

    friend ostream &operator<<(ostream &out, Calzado &c);
};


#endif //TIENDADEPORTIVA_CALZADO_H
