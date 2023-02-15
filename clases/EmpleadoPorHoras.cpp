//
// Created by USUARIO on 14/02/2023.
//

#include "EmpleadoPorHoras.h"

EmpleadoPorHoras::EmpleadoPorHoras(): Empleado(), valorHora(0), horasTrabajadas(0){}

EmpleadoPorHoras::EmpleadoPorHoras(string nombre, string documentoIdentidad, string cargo, string fechaContratacion,
                                   string Telefono, int productosVendidos, int tipoEmpleado, int valorHora,
                                   int horasTrabajadas):Empleado(nombre,documentoIdentidad,cargo,fechaContratacion, Telefono, productosVendidos, tipoEmpleado),
                                                        valorHora(valorHora),horasTrabajadas(horasTrabajadas){}

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

float EmpleadoPorHoras::calcularBeneficios(){
    int salario=0;
    salario = horasTrabajadas*valorHora;

    return salario;
}

float EmpleadoPorHoras::calcularNomina() {
    return calcularBeneficios()+2000;
}

ostream& operator<<(ostream &out, EmpleadoPorHoras EH){
    out << "VALOR HORAS: " << EH.valorHora;
    out << "HORAS TRABAJADAS: " << EH.horasTrabajadas;

    return  out;
}
