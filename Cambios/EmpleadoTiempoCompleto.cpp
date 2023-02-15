//
// Created by USUARIO on 14/02/2023.
//

#include "EmpleadoTiempoCompleto.h"

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto():Empleado(), salario(0){}

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(string nombre, string documentoIdentidad, string cargo, string fechaContratacion, string Telefono, int productosVendidos,
                                               int tipoEmpleado, int salario):Empleado(nombre, documentoIdentidad, cargo ,fechaContratacion, Telefono, productosVendidos, tipoEmpleado), salario(salario){}


int EmpleadoTiempoCompleto::getSalario(){
    return salario;
}

void EmpleadoTiempoCompleto::setSalario(int salario){
    this->salario=salario;
}

float EmpleadoTiempoCompleto::calcularBeneficios(){
    salario = getProductosVendidos()*1000;

    return salario;
}

float EmpleadoTiempoCompleto::calcularNomina(){
    salario = getProductosVendidos()+2000;
    return salario;
}

ostream& operator<<(ostream &out, EmpleadoTiempoCompleto ET){
    out << "SALARIO: " << ET.salario;

    return out;
}