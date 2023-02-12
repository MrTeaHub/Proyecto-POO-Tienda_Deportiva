//
// Created by USUARIO on 11/02/2023.
//

#ifndef TIENDADEPORTIVA_PRODUCTO_H
#define TIENDADEPORTIVA_PRODUCTO_H

#include "../interfaces/Categoria.h"
#include <iostream>
using namespace std;

// clase abstracta
class Producto: public Categoria  {
private:
    string nombre, referencia, color, marca, genero, modelo, material, categoria;
    int precio, garantia, stock;
    float talla;
public:
    Producto(): categoria(""),precio(0), garantia(0), stock(),talla(0.0){}
    Producto(const string &nombre, const string &referencia, const string &color, const string &marca,
             const string &genero, const string &modelo, const string &material, int precio,
             int garantia, int stock, float talla);

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getReferencia() const;

    void setReferencia(const string &referencia);

    const string &getColor() const;

    void setColor(const string &color);

    const string &getMarca() const;

    void setMarca(const string &marca);

    const string &getGenero() const;

    void setGenero(const string &genero);

    const string &getModelo() const;

    void setModelo(const string &modelo);

    const string &getMaterial() const;

    void setMaterial(const string &material);

    const string &getCategoria() const;

    void setCategoria(const string &categoria);

    int getPrecio() const;

    void setPrecio(int precio);

    int getGarantia() const;

    void setGarantia(int garantia);

    int getStock() const;

    void setStock(int stock);

    float getTalla() const;

    void setTalla(float talla);

    friend ostream& operator<<(ostream &out, Producto &p);
};


#endif //TIENDADEPORTIVA_PRODUCTO_H
