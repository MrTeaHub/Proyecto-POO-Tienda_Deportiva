//
// Created by USUARIO on 15/02/2023.
//

#ifndef TIENDADEPORTIVA_PAGINAWEB_H
#define TIENDADEPORTIVA_PAGINAWEB_H

#include <ostream>
#include "RegistroUsuario.h"


class PaginaWeb {
private:
    int cantidadUsuarios;
    RegistroUsuario usuariosConteo;
public:
    PaginaWeb();
    explicit PaginaWeb(RegistroUsuario usuariosConteo);

    int getCantidadUsuarios();
    void setCantidadUsuarios();
    const RegistroUsuario &getUsuariosConteo() const;
    void setUsuariosConteo(const RegistroUsuario &usuariosConteo);

    friend ostream &operator<<(ostream &os, PaginaWeb &usuario);
};


#endif //TIENDADEPORTIVA_PAGINAWEB_H
