//
// Created by crism on 11/02/2023.
//

#include "Tienda.h"


Tienda::Tienda():numeroEmpleados(0), empleados({}), listaProductos({}) , cantidadDeProductos(0){}
Tienda::Tienda(string nombre, string direccion, int numeroEmpleados): nombre(nombre), direccion(direccion), numeroEmpleados(numeroEmpleados), empleados({}){}
Tienda::Tienda(string nombre, string direccion, int numeroEmpleados, vector<Empleado *> empleados): nombre(nombre), direccion(direccion), numeroEmpleados(numeroEmpleados), empleados(empleados){}

Tienda::Tienda(vector<Producto *> listaProductos) : listaProductos(listaProductos), cantidadDeProductos(listaProductos.size())  {}

//GETTERS Y SETTERS
string Tienda::getNombreT(){
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
 vector<Producto *> &Tienda::getListaProductos() {
    return listaProductos;
}
void Tienda::setListaProductos(vector<Producto *> listaProductos) {
    Tienda::listaProductos = listaProductos;
}

void Tienda::setCantidadDeProductos() {

    Tienda::cantidadDeProductos = listaProductos.size();
}

int Tienda::getCantidadDeProductos(){
    setCantidadDeProductos();
    return cantidadDeProductos;
}

//METODOS PROPIOS

void Tienda::operator +=(Producto *p){
    listaProductos.push_back(p);
}
void Tienda::operator -=(int z){
    listaProductos.erase(listaProductos.begin() + (z-1));
}


//SOBRECARGA
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

    return out;
}

