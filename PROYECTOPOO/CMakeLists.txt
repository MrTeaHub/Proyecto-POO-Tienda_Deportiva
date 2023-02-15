cmake_minimum_required(VERSION 3.24)
project(Tienda_Deportiva_main)

set(CMAKE_CXX_STANDARD 17)

add_executable(Tienda_Deportiva_main main.cpp interfaces/Menu.cpp interfaces/Menu.h clases_abstractas/Usuario.cpp clases_abstractas/Usuario.h interfaces/InicioSesion.cpp interfaces/InicioSesion.h interfaces/Registro.cpp interfaces/Registro.h clases/CarritoDeCompra.cpp clases/CarritoDeCompra.h clases/Cliente.cpp clases/Cliente.h clases/Producto.cpp clases/Producto.h clases/Tienda.cpp clases/EmpleadoPorHoras.cpp clases/EmpleadoTiempoCompleto.cpp clases_abstractas/Empleado.cpp interfaces/InicioSesion.cpp interfaces/InicioSesion.h interfaces/Menu.cpp interfaces/Menu.h interfaces/Registro.cpp interfaces/Registro.h clases/Creador.cpp clases/Creador.h clases/Vendedor.cpp clases/Vendedor.h clases/RegistroUsuario.cpp clases/RegistroUsuario.h clases/PaginaUsuario.cpp clases/PaginaUsuario.h)
