//
// Created by VILL on 14/02/2023.
//

#include "PaginaWeb.h"

PaginaWeb::PaginaWeb(): usuariosConteo(), cantidadUsuarios(0) {}
PaginaWeb::PaginaWeb(RegistroUsuario usuariosConteo) : usuariosConteo(usuariosConteo) {}

void PaginaWeb::setCantidadUsuarios() {
    PaginaWeb::cantidadUsuarios = usuariosConteo.getUsuariosBaseDatos().size();
}
int PaginaWeb::getCantidadUsuarios(){
    setCantidadUsuarios();
    return cantidadUsuarios;
}

const RegistroUsuario &PaginaWeb::getUsuariosConteo() const {
    return usuariosConteo;
}
void PaginaWeb::setUsuariosConteo(const RegistroUsuario &usuariosConteo) {
    PaginaWeb::usuariosConteo = usuariosConteo;
}

ostream &operator<<(ostream &os, PaginaWeb &usuario) {
    os << "Actualmente poseemos mas de " << usuario.getCantidadUsuarios()-1 << " usuarios!!!\n\n";
    return os;
}
