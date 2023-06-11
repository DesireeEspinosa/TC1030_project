//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_USUARIO_H
#define PROYECTO_USUARIO_H
#include "Menu.h"
#include <string>

class Usuario {
    Menu menuSugerido;

public:
    Usuario() : menuSugerido(Menu()) {}
    Usuario(const Menu& menu) : menuSugerido(menu) {}
    ~Usuario() {}

    // Métodos
    void crearMenu();
    void verHistorial();
    int recomendarCalorias();
};

#endif //PROYECTO_USUARIO_H
