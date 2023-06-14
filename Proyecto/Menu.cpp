//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Menu.h"
#include <chrono>
#include <ctime>
#include <ctime>

Menu::Menu() : verduras(1,5), frutas(6,10), cereales(11,15), carnes(16,20), lacteos(21,25) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);

    // Separar la fecha y la hora del string strTiempoActual
    fechaCreacion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    horaCreacion = strTiempoActual.substr(11, 8); // HH:MM:SS
}

int Menu::calcularCalorias() const {
    // Implementar la lógica para calcular las calorías
}

// Operator << overload
ostream& operator<<(ostream& os, const Menu& menu) {
    os << "Fecha de creación: " << menu.getFechaCreacion() << "\n";
    os << "Hora de creación: " << menu.getHoraCreacion() << "\n";
    return os;
}
void Menu::crearDesayuno(int limCalorias) {
    cout << "Desayuno \n";
    srand(time(0));
    int calorias = 0;
    while (calorias < limCalorias) {
        int randomCerealIndex = rand() % 5; // assuming there are 5 elements
        int randomFrutaIndex = rand() % 5; // assuming there are 5 elements

        cout << cereales.getAlimento(randomCerealIndex);
        calorias += cereales.getAlimento(randomCerealIndex).getCaloriasPor100();
        if (calorias < limCalorias){
            cout << frutas.getAlimento(randomFrutaIndex);
            calorias += frutas.getAlimento(randomFrutaIndex).getCaloriasPor100();
        }
    }
}

void Menu::crearComida(int limCalorias) {
    cout << "Comida \n";
    srand(time(0));
    int calorias = 0;
    while (calorias < limCalorias) {
        int randomCerealIndex = rand() % 5; // assuming there are 5 elements
        int randomFrutaIndex = rand() % 5; // assuming there are 5 elements

        cout << carnes.getAlimento(randomCerealIndex);
        calorias += carnes.getAlimento(randomCerealIndex).getCaloriasPor100();
        if (calorias < limCalorias){
            cout << verduras.getAlimento(randomFrutaIndex);
            calorias += verduras.getAlimento(randomFrutaIndex).getCaloriasPor100();
        }
    }
}

void Menu::crearCena(int limCalorias) {
    cout << "Cena \n";
    srand(time(0));
    int calorias = 0;
    while (calorias < limCalorias) {
        int randomCerealIndex = rand() % 5; // assuming there are 5 elements
        int randomFrutaIndex = rand() % 5; // assuming there are 5 elements

        cout << lacteos.getAlimento(randomCerealIndex);
        calorias += lacteos.getAlimento(randomCerealIndex).getCaloriasPor100();

    }
}

void Menu::crearMenu(int limCalorias) {
    cout << "Alimentos para el dia || " << "Contenido nutricional (calorias) \n";
    crearDesayuno(limCalorias/4);
    crearComida(limCalorias/2);
    crearCena(limCalorias/4);
}