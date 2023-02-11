cmake_minimum_required(VERSION 3.24)
project(tiendaDeportiva)

set(CMAKE_CXX_STANDARD 17)

add_executable(tiendaDeportiva main.cpp interfaces/Categoria.cpp interfaces/Categoria.h clases/Producto.cpp clases/Producto.h)
