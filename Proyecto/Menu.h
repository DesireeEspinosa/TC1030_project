//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_MENU_H
#define PROYECTO_MENU_H
#include <iostream>
#include "Grupo.h"
using namespace std;

class Menu {
    string fechaCreacion, horaCreacion;
    Grupo verduras, frutas, cereales, carnes, lacteos;
    vector<Alimento*> desayuno, comida, cena;
public:
    Menu();
    Menu(int);
    ~Menu() {}

    // Métodos
    string getFechaCreacion() const { return fechaCreacion; }
    string getHoraCreacion() const { return horaCreacion; }
    //int getCalorias() const { return calorias; }
    void crearDesayuno(int limCalorias);
    void crearComida(int limCalorias);
    void crearCena(int limCalorias);
    void crearMenu(int limCalorias);
    vector<Alimento*> getDesayuno() const { return desayuno; }
    vector<Alimento*> getComida() const { return comida; }
    vector<Alimento*> getCena() const { return cena; }
    // Operator << overload
    friend ostream& operator<<(ostream& os, const Menu& menu);

};


#endif //PROYECTO_MENU_H
