cmake_minimum_required(VERSION 4.1)
project(Clase_10)

set(CMAKE_CXX_STANDARD 20)

add_executable(Clase_10 main.cpp
        Ingredientes.cpp
        Ingredientes.h
        pizzaBase.cpp
        pizzaBase.h
        Peperoni.cpp
        Peperoni.h
        decoradorPizza.cpp
        decoradorPizza.h
        Suprema.cpp
        Suprema.h
        Hawaiiana.cpp
        Hawaiiana.h
        Calzone.cpp
        Calzone.h
        decoradorCalzone.cpp
        decoradorCalzone.h
        calzoneBase.cpp
        calzoneBase.h)
