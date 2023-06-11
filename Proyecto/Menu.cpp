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
}

int Menu::calcularCalorias() const {
    // Implementar la lógica para calcular las calorías
}
