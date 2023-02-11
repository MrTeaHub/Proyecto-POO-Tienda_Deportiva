//
// Created by crism on 11/02/2023.
//

#include "Tienda.h"


Tienda::Tienda():numeroEmpleados(0), empleados({}){}

Tienda::Tienda(string nombre, string direccion, int numeroEmpleados): nombre(nombre), direccion(direccion), numeroEmpleados(numeroEmpleados), empleados({}){}

Tienda::Tienda(string nombre, string direccion, int numeroEmpleados, vector<Empleado *> empleados): nombre(nombre), direccion(direccion), numeroEmpleados(numeroEmpleados), empleados(empleados){}

string Tienda::getNombre(){
    return nombre;
}

void Tienda::setNombre(string nombre) {
    this->nombre = nombre;
}

string Tienda::getDireccion(){
    return direccion;
}

void Tienda::setDireccion(string direccion) {
    this->direccion = direccion;
}

int Tienda::getNumeroEmpleados(){
    return numeroEmpleados;
}

void Tienda::setNumeroEmpleados(int numeroEmpleados) {
    this->numeroEmpleados = numeroEmpleados;
}

vector<Empleado* > Tienda::getEmpleados(){
    return empleados;
}

void Tienda::setEmpleados(vector<Empleado *> lista){
    empleados = lista;
}

ostream& operator<<(ostream &out, Tienda i){
    out << "NOMBRE: " << i.nombre << endl;
    out << "DIRECCION : " << i.direccion << endl;
    out << "NUMERO DE EMPLEADOS: " << i.numeroEmpleados << endl;
    if(!i.empleados.empty()){
        out << endl << "EMPLEADOS: " << endl << endl;
        for(Empleado *p: i.empleados){
            p->print(cout);
            cout << endl;
        }
    }
    else{
        cout << "NO HAY EMPLEADOS PARA MOSTRAR. "<< endl;
    }

}
