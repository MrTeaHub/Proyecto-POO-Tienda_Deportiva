//
// Created by crism on 11/02/2023.
//

#include "EmpleadoPorHoras.h"

EmpleadoPorHoras::EmpleadoPorHoras(): Empleado(), Tienda(), valorHora(0), horasTrabajadas(0){}

EmpleadoPorHoras::EmpleadoPorHoras(string nombre, string documentoIdentidad, string cargo, string fechaContratacion,
                                   string Telefono, int productosVendidos, int tipoEmpleado, string Nombre,
                                   string direccion, int numeroEmpleados, vector<Empleado *> empleados, int valorHora,
                                   int horasTrabajadas):Empleado(nombre,documentoIdentidad,cargo,fechaContratacion, Telefono, productosVendidos, tipoEmpleado),
                                   Tienda(Nombre, direccion, numeroEmpleados, empleados), valorHora(valorHora), horasTrabajadas(horasTrabajadas){}

int EmpleadoPorHoras::getValorHora(){
    return valorHora;
}

void EmpleadoPorHoras::setValorHora(int valorHora){
    this->valorHora=valorHora;
}

int EmpleadoPorHoras::getHorasTrabajadas(){
    return horasTrabajadas;
}

void EmpleadoPorHoras::setHorasTrabajadas(int horasTrabajadas){
    this->horasTrabajadas=horasTrabajadas;
}

void EmpleadoPorHoras::calcularBeneficios(){
    cout << "HOLA";
}

void EmpleadoPorHoras::calcularNomina() {
    cout << "HOLA";
}

ostream& operator<<(ostream &out, EmpleadoPorHoras EH){
    out << "VALOR HORAS: " << EH.valorHora;
    out << "HORAS TRABAJADAS: " << EH.horasTrabajadas;

    return  out;
}