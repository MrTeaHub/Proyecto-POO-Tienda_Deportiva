//
// Created by USUARIO on 14/02/2023.
//

#include "Empleado.h"

Empleado::Empleado():productosVendidos(0),tipoEmpleado(0){}

Empleado::Empleado(string nombre, string documentoIdentidad, string cargo,
                   string fechaContratacion, string telefono, int productosVendidos, int tipoEmpleado)
        : nombre(nombre), documentoIdentidad(documentoIdentidad), cargo(cargo), fechaContratacion(fechaContratacion),
          telefono(telefono), productosVendidos(productosVendidos), tipoEmpleado(tipoEmpleado) {}

string Empleado::getNombreE(){
    return nombre;
}

void Empleado::setNombre(string nombre) {
    this->nombre = nombre;
}

string Empleado::getDocumentoIdentidad(){
    return documentoIdentidad;
}

void Empleado::setDocumentoIdentidad(string documentoIdentidad) {
    this->documentoIdentidad = documentoIdentidad;
}

string Empleado::getCargo(){
    return cargo;
}

void Empleado::setCargo(const string cargo) {
    this->cargo = cargo;
}

string Empleado::getFechaContratacion(){
    return fechaContratacion;
}

void Empleado::setFechaContratacion(string fechaContratacion) {
    this->fechaContratacion = fechaContratacion;
}

string Empleado::getTelefono(){
    return telefono;
}

void Empleado::setTelefono(string telefono) {
    this->telefono = telefono;
}

int Empleado::getProductosVendidos(){
    return productosVendidos;
}

void Empleado::setProductosVendidos(int productosVendidos) {
    this->productosVendidos = productosVendidos;
}

int Empleado::getTipoEmpleado(){
    return tipoEmpleado;
}

void Empleado::setTipoEmpleado(int tipoEmpleado) {
    this->tipoEmpleado = tipoEmpleado;
}


void Empleado::print(ostream &out){
    out << "NOMBRE: " << nombre << endl;
    out << "DOCUMENTO DE IDENTIDAD: " << documentoIdentidad << endl;
    out << "CARGO: " << cargo << endl;
    out << "FECHA DE CONTRATACION: " << fechaContratacion << endl;
    out << "TELEFONO: " << telefono << endl;
    out << "PRODUCTOS VENDIDOS: " << productosVendidos << endl;
    out << "TIPO DE EMPLEADO: " << tipoEmpleado << endl;
}

ostream& operator<<(ostream &out, Empleado &e) {
    out << "NOMBRE: " << e.nombre << endl;
    out << "DOCUMENTO DE IDENTIDAD: " << e.documentoIdentidad << endl;
    out << "CARGO: " << e.cargo << endl;
    out << "FECHA DE CONTRATACION: " << e.fechaContratacion << endl;
    out << "TELEFONO: " << e.telefono << endl;
    out << "PRODUCTOS VENDIDOS: " << e.productosVendidos << endl;
    out << "TIPO DE EMPLEADO: " << e.tipoEmpleado << endl;
    return out;

}