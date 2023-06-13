//
// Created by PC BULLOCK on 12/06/2023.
//

#include "Grupo.h"
#include <iostream>
using namespace std;
#include <fstream>

Grupo::Grupo() {
    ifstream file("Alimentos.csv");
    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(0);
    }

    while (!file.eof()) {
        alimentos.emplace_back(file);
    }

    generarGrupo(verduras,0);
    generarGrupo(frutas,5);
    generarGrupo(cereales,10);
    generarGrupo(carnes,15);
    generarGrupo(lacteos,20);
}

void Grupo::generarGrupo(vector<Alimento> &nombreGrupo, int inicio) {
    auto it = alimentos.begin() + inicio;
    for (auto i = it; i != it + 5 && i != alimentos.end(); ++i) {
        nombreGrupo.push_back(*i);
    }
}


void Grupo::printAlimentos() {
    for (auto &alimento: lacteos) {
        cout << alimento.getNombre() << endl;
        cout << alimento.getCaloriasPor100() << endl;
    }
}

