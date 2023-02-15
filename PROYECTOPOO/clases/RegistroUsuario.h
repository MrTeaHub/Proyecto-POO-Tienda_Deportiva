//
// Created by VILL on 12/02/2023.
//

#ifndef TIENDA_DEPORTIVA_MAIN_REGISTROUSUARIO_H
#define TIENDA_DEPORTIVA_MAIN_REGISTROUSUARIO_H

#include <vector>
#include <iostream>
#include "../interfaces/InicioSesion.h"
#include "../interfaces/Registro.h"
#include "../clases_abstractas/Usuario.h"
#include "Cliente.h"
#include "Vendedor.h"
#include "Creador.h"

using namespace std;


class RegistroUsuario: public InicioSesion, public Registro{
private:
    vector<Usuario *>usuariosBaseDatos;
    Cliente* nuevoCliente;
    Creador* nuevoCreador;
    Vendedor* nuevoVendedor;

public:
    //CONSTRUCTORES
    RegistroUsuario();
    explicit RegistroUsuario(const vector<Usuario *> &usuariosBaseDatos);
    explicit RegistroUsuario(string correoElectronico, string contrasena, string datoVariable);



    //METODOS PROPIOS
    void crearUsuario();
    virtual int verificarUsuarioYContrasena()override;
    virtual string validarContrasena()override;
    virtual string  validarRegistro()override;

    //GETTERS Y SETTERS
    const vector<Usuario *> &getUsuariosBaseDatos() const;
    void setUsuariosBaseDatos(const vector<Usuario *> &usuariosBaseDatos);
    Cliente *getNuevoCliente() const;
    void setNuevoCliente(Cliente *nuevoCliente);
    Creador *getNuevoCreador() const;
    void setNuevoCreador(Creador *nuevoCreador);
    Vendedor *getNuevoVendedor() const;
    void setNuevoVendedor(Vendedor *nuevoVendedor);

    friend ostream &operator<<(ostream &os, RegistroUsuario usuario);
};


#endif //TIENDA_DEPORTIVA_MAIN_REGISTROUSUARIO_H
