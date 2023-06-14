//
// Created by PC BULLOCK on 12/06/2023.
//

#include "Grupo.h"
#include <iostream>
using namespace std;
#include <fstream>
#include <sstream>

Grupo::Grupo(int infLimit, int supLimit) {
    ifstream file("Alimentos.csv");
    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
        exit(0);
    }

    string line;
    int rowNumber = 0;

    while (getline(file, line)) {
        rowNumber++;
        if (rowNumber >= infLimit && rowNumber <= supLimit) {
            istringstream iss(line);
            string nombreAlimento;
            string strCalorias;

            getline(iss, nombreAlimento, ',');
            getline(iss, strCalorias);

            Alimento alimento;
            alimento.setNombre(nombreAlimento);
            alimento.setCaloriasPor100(stof(strCalorias));

            alimentos.emplace_back(alimento);
        }
    }

    file.close();
}

void Grupo::generarGrupo(vector<Alimento> &nombreGrupo, int inicio) {
    auto it = alimentos.begin() + inicio;
    for (auto i = it; i != it + 5 && i != alimentos.end(); ++i) {
        nombreGrupo.push_back(*i);
    }
}


void Grupo::printAlimentos() {
    for (auto &alimento: alimentos) {
        cout << alimento.getNombre() << "\n";
        cout << alimento.getCaloriasPor100() << "\n";
    }
}

