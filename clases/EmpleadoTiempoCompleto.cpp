//
// Created by USUARIO on 14/02/2023.
//

#include "EmpleadoTiempoCompleto.h"

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto():Empleado(),Tienda(), salario(0){}

EmpleadoTiempoCompleto::EmpleadoTiempoCompleto(string nombre, string documentoIdentidad, string cargo, string fechaContratacion, string Telefono, int productosVendidos,
                                               int tipoEmpleado, string Nombre, string direccion, int numeroEmpleados, vector<Empleado *> empleados, int salario):Empleado(nombre, documentoIdentidad, cargo ,fechaContratacion, Telefono, productosVendidos, tipoEmpleado),
                                                                                                                                                                  Tienda(Nombre, direccion, numeroEmpleados, empleados){}


int EmpleadoTiempoCompleto::getSalario(){
    return salario;
}

void EmpleadoTiempoCompleto::setSalario(int salario){
    this->salario=salario;
}

void EmpleadoTiempoCompleto::calcularBeneficios(){
    cout << "HOLA" ;
}

void EmpleadoTiempoCompleto::calcularNomina(){
    cout << "HOLA" ;
}

ostream& operator<<(ostream &out, EmpleadoTiempoCompleto ET){
    out << "SALARIO: " << ET.salario;

    return out;
}