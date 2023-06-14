//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_MENU_H
#define PROYECTO_MENU_H
#include <iostream>
#include "Grupo.h"
using namespace std;

class Menu {
    string fechaCreacion;
    string horaCreacion;
    Grupo verduras, frutas, cereales, carnes, lacteos;
public:
    Menu();
    ~Menu() {}

    // Métodos
    string getFechaCreacion() const { return fechaCreacion; }
    string getHoraCreacion() const { return horaCreacion; }
    int calcularCalorias() const;
    void crearDesayuno(int limCalorias);
    void crearComida(int limCalorias);
    void crearCena(int limCalorias);
    void crearMenu(int limCalorias);

    // Operator << overload
    friend ostream& operator<<(ostream& os, const Menu& menu);
};


#endif //PROYECTO_MENU_H
