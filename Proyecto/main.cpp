#include "Alimento.h"
#include <iostream>
#include <vector>
#include <fstream>

int main() {
    vector<Alimento> alimentos;
    ifstream file("Alimentos.csv");

    if (!file.is_open()) {
        cout << "No se pudo abrir el archivo" << endl;
        return 1;
    }

    while (!file.eof()) {
        alimentos.emplace_back(file);
    }

    file.close();

    // Utilizar objetos Alimento
    for (const auto& alimento : alimentos) {
        cout << "Nombre: " << alimento.getNombre()
                  << ", Calorias por 100g: " << alimento.getCaloriasPor100() << endl;
    }

    return 0;
}
