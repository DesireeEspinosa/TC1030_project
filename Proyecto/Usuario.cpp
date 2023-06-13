//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Usuario.h"

void Usuario::crearMenu() {
    // Implementar la lógica para crear un menú.
    switch(recomendarCalorias()){
        case 2000:
            cout << "Tu IMC es menor a 18.5, se te recomienda consumir 2000 calorias" << endl;
            break;
        case 1800:
            cout << "Tu IMC es menor a 25, se te recomienda consumir 1800 calorias" << endl;
            break;
        case 1500:
            cout << "Tu IMC es menor a 30, se te recomienda consumir 1500 calorias" << endl;
            break;
        case 1200:
            cout << "Tu IMC es mayor a 30, se te recomienda consumir 1200 calorias" << endl;
            break;
    }
}

void Usuario::verHistorial() {
    // Implementar la lógica para ver el historial.
}

int Usuario::recomendarCalorias() {
    // Implementar la lógica para recomendar calorías.
    if (calcularIMC() < 18.5) {
        return 2000;
    } else if (calcularIMC() < 25) {
        return 1800;
    } else if (calcularIMC() < 30) {
        return 1500;
    } else {
        return 1200;
    }  
}

