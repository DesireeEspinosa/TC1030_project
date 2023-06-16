//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Usuario.h"

void Usuario::implementarMenu() {
    // Implementar la lógica para crear un menú.
    cout << "Te hemos construido este menu: \n";
    switch(recomendarCalorias()){
        case 2000:
            cout << "Tu IMC es menor a 18.5, se te recomienda consumir 2000 calorias. \n";
            menuSugerido = Menu(2000);
            menus.push_back(menuSugerido);
            break;
        case 1800:
            cout << "Tu IMC es menor a 25, se te recomienda consumir 1800 calorias. \n";
            menuSugerido = Menu(1800);
            menus.push_back(menuSugerido);
            break;
        case 1500:
            cout << "Tu IMC es menor a 30, se te recomienda consumir 1500 calorias \n";
            menuSugerido = Menu(1800);
            menus.push_back(menuSugerido);
            break;
        case 1200:
            cout << "Tu IMC es mayor a 30, se te recomienda consumir 1200 calorias \n";
            menuSugerido = Menu(1200);
            menus.push_back(menuSugerido);
    }
}

void Usuario::verHistorial() {
    // Implementar la lógica para ver el historial.
    cout << "Todos los menus creados \n";
    for (int i = 0; i < menus.size(); i++) {
        cout << menus[i];
    }
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