//
// Created by USUARIO on 14/02/2023.
//

#include "RegistroUsuario.h"

RegistroUsuario::RegistroUsuario(): usuariosBaseDatos({}){}
RegistroUsuario::RegistroUsuario(const vector<Usuario *> &usuariosBaseDatos) : usuariosBaseDatos(usuariosBaseDatos) {}
RegistroUsuario::RegistroUsuario(string correoElectronico, string contrasena, string nombreCliente){
    nuevoCliente = new Cliente(correoElectronico, contrasena, nombreCliente);
    nuevoVendedor = new Vendedor(correoElectronico, contrasena, nombreCliente);
    nuevoCreador = new Creador(correoElectronico, contrasena, nombreCliente);
}


//METODOS PROPIOS

string RegistroUsuario::validarContrasena(){
    string c1, c2;
    bool flag = true;
    cin >> c1;
    while(flag){
        cout << "Por favor confirma la contrasena ingresada \n";
        cin >> c2;
        if(c1 == c2){
            flag = false;
            return c1;
        }
        else{
            cout << "La contrasena ingresada no es la correcta...\n\n";
        }
    }
}

string  RegistroUsuario::validarRegistro(){
    return "El registro se realizo con exito! \n";
}

void RegistroUsuario::crearUsuario(){
    int opcCrearUsuario = 0;
    bool flag = true;
    string correoElectronico = "";
    string contrasena = "";
    while (flag){

        cout << "Que tipo de usuario desea crear? \n" ;
        cout << "1) Usuario \n";
        cout << "2) Comerciante \n";
        cout << "3) Creador \n";
        cout << "4) Regresar \n";
        cout << "Por favor digite la opcion\n";
        cin >> opcCrearUsuario;

        if(opcCrearUsuario == 1){
            string nombreUsuario = "";

            cout << "Ingrese su primer nombre: \n" ;
            cin >> nombreUsuario;
            cout << "Ingrese su correo electronico: \n" ;
            cin >> correoElectronico;
            cout << "Ingrese su contrasena \n";
            contrasena = validarContrasena();

            nuevoCliente = new Cliente(correoElectronico, contrasena, nombreUsuario  );
            usuariosBaseDatos.push_back(nuevoCliente);
            cout << validarRegistro();

            flag = false;
        }
        else if(opcCrearUsuario == 2){
            string nombreVendedor = "";

            cout << "Ingrese su primer nombre: \n" ;
            cin >> nombreVendedor;
            cout << "Ingrese su correo electronico: \n" ;
            cin >> correoElectronico;
            cout << "Ingrese su contrasena \n";
            contrasena = validarContrasena();

            nuevoVendedor = new Vendedor(correoElectronico, contrasena, nombreVendedor );
            usuariosBaseDatos.push_back(nuevoVendedor);
            cout << validarRegistro();
            flag = false;

        }else if(opcCrearUsuario == 3){
            string rango = "";

            cout << "Ingrese el rango del creador: \n" ;
            cin >> rango;
            cout << "Ingrese su correo electronico: \n" ;
            cin >> correoElectronico;
            cout << "Ingrese su contrasena \n";
            contrasena = validarContrasena();


            nuevoCreador = new Creador(correoElectronico, contrasena, rango );
            usuariosBaseDatos.push_back(nuevoCreador);
            cout << validarRegistro();
            flag = false;

        }else if(opcCrearUsuario == 4){
            flag = false;
        }
        else{
            cout << "Opcion Invalida... \n";
        }
    }

}
int RegistroUsuario::verificarUsuarioYContrasena(){
    int opcInciarSesion = 0;
    bool flag = true;
    bool flagContrasena=true;
    bool flagTotal = true;
    string correo_nombre = "";
    string contrasena = "";
    while (flag){

        cout << "Con que tipo de usuario desea ingresar? \n" ;
        cout << "1) Usuario \n";
        cout << "2) Comerciante \n";
        cout << "3) Creador \n";
        cout << "4) Regresar \n";
        cout << "Por favor digite la opcion\n";
        cin >> opcInciarSesion;


        if(opcInciarSesion == 1){
            while (flagTotal) {
                cout << "Ingrese su nombre de usuario o correo electronico:\n";
                cin >> correo_nombre;
                for (Usuario *u: usuariosBaseDatos) {
                    if (u->getTipoUsuario() == 0) {
                        nuevoCliente = static_cast<Cliente *>(u);
                        if ( correo_nombre == nuevoCliente->getNombreCliente() or  correo_nombre == nuevoCliente->getCorreoUsuario()){
                            while (flagContrasena) {
                                cout << "Ingrese su contrasena:\n";
                                cin >> contrasena;
                                if (nuevoCliente->getContrasena() == contrasena) {
                                    flagContrasena = false;
                                    flagTotal = false;
                                    cout << "Inicio de sesion realizado con exito!\n";
                                    return 1;

                                }else {
                                    cout << "La contrasena es erronea...\n\n";
                                }
                            }
                        }
                    }
                }
            }
        }else if(opcInciarSesion == 2){
            while (flagTotal) {
                cout << "Ingrese su nombre de usuario o correo electronico:\n";
                cin >> correo_nombre;
                for (Usuario *u: usuariosBaseDatos) {
                    if (u->getTipoUsuario() == 1) {
                        nuevoVendedor = static_cast<Vendedor *>(u);
                        if (correo_nombre == nuevoVendedor->getNombreVendedor() or correo_nombre == nuevoVendedor->getCorreoUsuario()){
                            while (flagContrasena) {
                                cout << "Ingrese su contrasena:\n";
                                cin >> contrasena;
                                if (nuevoVendedor->getContrasena() == contrasena) {
                                    flagContrasena = false;
                                    flagTotal = false;
                                    cout << "Inicio de sesion realizado con exito!\n";
                                    return 2;

                                }else {
                                    cout << "La contrasena es erronea...\n\n";
                                }
                            }
                        }
                    }
                }
            }
        }
        else if(opcInciarSesion == 3){
            while (flagTotal) {
                cout << "Ingrese su  correo electronico:\n";
                cin >> correo_nombre;

                for (Usuario *u: usuariosBaseDatos) {
                    if (u->getTipoUsuario() == 2) {
                        nuevoCreador = static_cast<Creador *>(u);

                        if (correo_nombre == nuevoCreador->getCorreoUsuario()){
                            while (flagContrasena) {
                                cout << "Ingrese su contrasena:\n";
                                cin >> contrasena;
                                if (nuevoCreador->getContrasena() == contrasena) {
                                    flagContrasena = false;
                                    flagTotal = false;
                                    cout << "Inicio de sesion realizado con exito!\n";
                                    return 3;

                                }else {
                                    cout << "La contrasena es erronea...\n\n";
                                }
                            }
                        }
                    }
                }
            }
        } else if(opcInciarSesion == 4){
            flag = false;
            return 0;
        }

    }
    return 0;
}


ostream &operator<<(ostream &os, RegistroUsuario usuario) {
    cout << "Usuario/s" <<endl;;
    for(Usuario* usu : usuario.getUsuariosBaseDatos()){
        if(usu->getTipoUsuario()==0){
            cout << ") " << usu << endl;
        }
    }

    cout << "\n\nComerciant/es" << endl;
    for(Usuario* usu : usuario.getUsuariosBaseDatos()){
        if(usu->getTipoUsuario()==1){
            cout << ") " << usu << endl;
        }
    }

    cout << "\n\nCreador/es:" << endl;
    for(Usuario* usu : usuario.getUsuariosBaseDatos()){
        if(usu->getTipoUsuario()==2){
            cout << ") " << usu << endl;
        }
    }
    cout << endl;
    return os;
}


//GETTERS Y SETTERS
const vector<Usuario *> &RegistroUsuario::getUsuariosBaseDatos() const {
    return usuariosBaseDatos;
}

void RegistroUsuario::setUsuariosBaseDatos(const vector<Usuario *> &usuariosBaseDatos) {
    RegistroUsuario::usuariosBaseDatos = usuariosBaseDatos;
}

Cliente *RegistroUsuario::getNuevoCliente() const {
    return nuevoCliente;
}

void RegistroUsuario::setNuevoCliente(Cliente *nuevoCliente) {
    RegistroUsuario::nuevoCliente = nuevoCliente;
}

Creador *RegistroUsuario::getNuevoCreador() const {
    return nuevoCreador;
}

void RegistroUsuario::setNuevoCreador(Creador *nuevoCreador) {
    RegistroUsuario::nuevoCreador = nuevoCreador;
}

Vendedor *RegistroUsuario::getNuevoVendedor() const {
    return nuevoVendedor;
}

void RegistroUsuario::setNuevoVendedor(Vendedor *nuevoVendedor) {
    RegistroUsuario::nuevoVendedor = nuevoVendedor;
}