cmake_minimum_required(VERSION 3.23)
project(Proyecto)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proyecto main.cpp Alimento.cpp Persona.cpp Menu.cpp Grupo.cpp)
