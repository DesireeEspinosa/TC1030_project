//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Menu.h"
#include <chrono>
#include <ctime>

Menu::Menu() {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);

    // Separar la fecha y la hora del string strTiempoActual
    fechaCreacion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    horaCreacion = strTiempoActual.substr(11, 8); // HH:MM:SS

    // Crear los grupos
    Grupo verduras(1, 5);
    Grupo frutas(6, 10);
    Grupo cereales(11, 15);
    Grupo carnes(16, 20);
    Grupo lacteos(21, 25);
}

int Menu::calcularCalorias() const {
    // Implementar la lógica para calcular las calorías
}

void Menu::imprimirMenu() const {
    cout << "Fecha de creacion: " << fechaCreacion << "\n";
    cout << "Hora de creacion: " << horaCreacion << "\n";
}