//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Menu.h"
#include <chrono>
#include <ctime>

Menu::Menu() : verduras(1,5), frutas(6,10), cereales(11,15), carnes(16,20), lacteos(21,25) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);

    // Separar la fecha y la hora del string strTiempoActual
    fechaCreacion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    horaCreacion = strTiempoActual.substr(11, 8); // HH:MM:SS
}

Menu::Menu(int calorias) : verduras(1,5), frutas(6,10), cereales(11,15), carnes(16,20), lacteos(21,25) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);

    // Separar la fecha y la hora del string strTiempoActual
    fechaCreacion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    horaCreacion = strTiempoActual.substr(11, 8); // HH:MM:SS
    crearMenu(calorias);
}

// Operator << overload
ostream& operator<<(ostream& os, const Menu& menu) {
    os << "Fecha de creacion: " << menu.getFechaCreacion() << "\n";
    os << "Hora de creacion: " << menu.getHoraCreacion() << "\n";
    for (int i = 0; i < menu.getDesayuno().size(); ++i) {
        os << *(menu.getDesayuno()[i]);
    }
    for (int i = 0; i < menu.getComida().size(); ++i) {
        os << *(menu.getComida()[i]);
    }
    for (int i = 0; i < menu.getCena().size(); ++i) {
        os << *(menu.getCena()[i]);
    }
    return os;
}

void Menu::crearDesayuno(int limCalorias) {
    cout << "Desayuno \n";
    srand(time(0));
    int calorias = 0;
    while (calorias < limCalorias) {
        int randomCerealIndex = rand() % 5; // assuming there are 5 elements
        int randomFrutaIndex = rand() % 5; // assuming there are 5 elements
        Alimento cereal = cereales.getAlimento(randomCerealIndex);
        this -> desayuno.push_back(new Alimento(cereal));
        cout << cereales.getAlimento(randomCerealIndex);
        calorias += cereales.getAlimento(randomCerealIndex).getCaloriasPor100();
        if (calorias < limCalorias){
            Alimento fruta = frutas.getAlimento(randomFrutaIndex);
            this -> desayuno.push_back(new Alimento(fruta));
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
        int randomCarnesIndex = rand() % 5; // assuming there are 5 elements
        int randomVerduraIndex = rand() % 5; // assuming there are 5 elements
        Alimento carne = carnes.getAlimento(randomCarnesIndex);
        this -> comida.push_back(new Alimento(carne));
        cout << carnes.getAlimento(randomCarnesIndex);
        calorias += carnes.getAlimento(randomCarnesIndex).getCaloriasPor100();
        if (calorias < limCalorias){
            cout << verduras.getAlimento(randomVerduraIndex);
            Alimento verdura = verduras.getAlimento(randomVerduraIndex);
            this -> comida.push_back(new Alimento(verdura));
            calorias += verduras.getAlimento(randomVerduraIndex).getCaloriasPor100();
        }
    }
}

void Menu::crearCena(int limCalorias) {
    cout << "Cena \n";
    srand(time(0));
    int calorias = 0;
    while (calorias < limCalorias) {
        int randomLacteosIndex = rand() % 5; // assuming there are 5 elements
        Alimento lacteo = lacteos.getAlimento(randomLacteosIndex);
        this -> cena.push_back(new Alimento(lacteo));
        cout << lacteos.getAlimento(randomLacteosIndex);
        calorias += lacteos.getAlimento(randomLacteosIndex).getCaloriasPor100();

    }
}

void Menu::crearMenu(int limCalorias) {
    cout << "Alimentos para el dia || " << "Contenido nutricional (calorias) \n";
    crearDesayuno(limCalorias/4);
    crearComida(limCalorias/2);
    crearCena(limCalorias/4);
}


