//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_USUARIO_H
#define PROYECTO_USUARIO_H
#include "Menu.h"
#include "Persona.h"
#include <string>

class Usuario: public Persona {
    Menu menuSugerido;
public:
    Usuario() : menuSugerido(), Persona() {}
    Usuario(const Menu& menu) : menuSugerido(menu) {}
    ~Usuario() {}

    // Métodos
    void imprimirMenu();
    void verHistorial();
    int recomendarCalorias();
};

#endif //PROYECTO_USUARIO_H
