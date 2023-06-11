//
// Created by Desirée Espinosa on 10/06/23.
//

#include "Alimento.h"

// Constructor que lee de un archivo
Alimento::Alimento(ifstream& file) {
    // Lee el nombre hasta la primera coma
    std::getline(file, nombre, ',');

    // Lee las calorías hasta el final de la línea
    string strCalorias;
    getline(file, strCalorias);
    caloriasPor100 = stof(strCalorias);
}