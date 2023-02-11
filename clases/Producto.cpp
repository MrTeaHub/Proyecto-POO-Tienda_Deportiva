//
// Created by USUARIO on 11/02/2023.
//

#include "Producto.h"

Producto::Producto(const string &nombre, const string &referencia, const string &color, const string &marca,
                   const string &genero, const string &modelo, const string &material, const string &categoria,
                   int precio, int garantia, int stock, float talla) : nombre(nombre), referencia(referencia),
                                                                       color(color), marca(marca), genero(genero),
                                                                       modelo(modelo), material(material),
                                                                       categoria(categoria), precio(precio),
                                                                       garantia(garantia), stock(stock), talla(talla) {}

const string &Producto::getNombre() const {
    return nombre;
}

void Producto::setNombre(const string &nombre) {
    Producto::nombre = nombre;
}

const string &Producto::getReferencia() const {
    return referencia;
}

void Producto::setReferencia(const string &referencia) {
    Producto::referencia = referencia;
}

const string &Producto::getColor() const {
    return color;
}

void Producto::setColor(const string &color) {
    Producto::color = color;
}

const string &Producto::getMarca() const {
    return marca;
}

void Producto::setMarca(const string &marca) {
    Producto::marca = marca;
}

const string &Producto::getGenero() const {
    return genero;
}

void Producto::setGenero(const string &genero) {
    Producto::genero = genero;
}

const string &Producto::getModelo() const {
    return modelo;
}

void Producto::setModelo(const string &modelo) {
    Producto::modelo = modelo;
}

const string &Producto::getMaterial() const {
    return material;
}

void Producto::setMaterial(const string &material) {
    Producto::material = material;
}

const string &Producto::getCategoria() const {
    return categoria;
}

void Producto::setCategoria(const string &categoria) {
    Producto::categoria = categoria;
}

int Producto::getPrecio() const {
    return precio;
}

void Producto::setPrecio(int precio) {
    Producto::precio = precio;
}

int Producto::getGarantia() const {
    return garantia;
}

void Producto::setGarantia(int garantia) {
    Producto::garantia = garantia;
}

int Producto::getStock() const {
    return stock;
}

void Producto::setStock(int stock) {
    Producto::stock = stock;
}

float Producto::getTalla() const {
    return talla;
}

void Producto::setTalla(float talla) {
    Producto::talla = talla;
}

ostream &operator<<(ostream &out, Producto &p) {
    cout << "Descripcion del producto: " << endl << endl;
    cout << "Categoria: " << p.getCategoria() << endl;
    cout << "Nombre: " << p.getNombre() << endl;
    cout << "Genero: " << p.getGenero() << endl;
    cout << "Marca: " << p.getMarca() << endl;
    cout << "Color: " << p.getColor() <<endl;
    cout << "Talla: " << p.getTalla() << endl;
    cout << "Precio: " << p.getPrecio() << endl;
    cout << "Stock: " << p.getStock() << endl;
    cout << "Garantia: " << p.getGarantia() << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Material: " << p.getMaterial() << endl;
    cout << "Referencia: " << p.getReferencia() << endl;
    cout << "Modelo:" << p.getModelo() << endl;
    return out;
}



