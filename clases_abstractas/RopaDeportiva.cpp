//
// Created by USUARIO on 11/02/2023.
//

#include "RopaDeportiva.h"

RopaDeportiva::RopaDeportiva(const string &tipoDeporte, const string &nombreEquipo, bool equipo) : tipoDeporte(tipoDeporte),
                                                                                                   nombreEquipo(nombreEquipo),
                                                                                                   equipo(equipo){}

const string &RopaDeportiva::getTipoDeporte() const {
    return tipoDeporte;
}

void RopaDeportiva::setTipoDeporte(const string &tipoDeporte) {
    RopaDeportiva::tipoDeporte = tipoDeporte;
}

const string &RopaDeportiva::getNombreEquipo() const {
    return nombreEquipo;
}

void RopaDeportiva::setNombreEquipo(const string &nombreEquipo) {
    RopaDeportiva::nombreEquipo = nombreEquipo;
}

bool RopaDeportiva::getEquipo() const {
    return equipo;
}

void RopaDeportiva::setEquipo(bool equipo) {
    RopaDeportiva::equipo = equipo;
}

ostream &operator<<(ostream &out, RopaDeportiva &r) {
    cout << "Tipo de deporte: " << r.getTipoDeporte() << endl;
    cout << "Equipo: " << r.getEquipo() << endl;
    cout << "Nombre del equipo: " << r.getNombreEquipo() << endl;
    return out;
}








