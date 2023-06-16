//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_USUARIO_H
#define PROYECTO_USUARIO_H
#include "Menu.h"
#include "Persona.h"
#include <string>
#include <vector>

class Usuario: public Persona {
    string nombreUsuario;
    Menu menuSugerido;
    vector<Menu> menus;
public:
    Usuario(string nombreUsuario) : nombreUsuario(nombreUsuario), menuSugerido(), Persona() {}
    Usuario() : menuSugerido(), Persona() {}
    Usuario(const Menu& menu) : menuSugerido(menu) {}
    ~Usuario() {}

    // Métodos
    vector<Menu> getMenus() const { return menus; }
    void setNombreUsuario(string nombreUsuario) { this->nombreUsuario = nombreUsuario; }
    void implementarMenu();
    void verHistorial();
    int recomendarCalorias();
};

#endif //PROYECTO_USUARIO_H
