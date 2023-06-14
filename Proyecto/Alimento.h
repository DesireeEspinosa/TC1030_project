//
// Created by Desirée Espinosa on 10/06/23.
//

#ifndef PROYECTO_ALIMENTO_H
#define PROYECTO_ALIMENTO_H
#include <iostream>
#include <fstream>
using namespace std;

class Alimento {
    string nombre;
    float caloriasPor100;

public:
    // Constructor que lee de un archivo
    Alimento() {};
    Alimento(ifstream& file);

    // Getters
    string getNombre() const { return nombre; }
    float getCaloriasPor100() const { return caloriasPor100; }

    // Setters
    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setCaloriasPor100(float caloriasPor100) { this->caloriasPor100 = caloriasPor100; }

    // Overload << operator
    friend ostream& operator<<(ostream& os, const Alimento& alimento);
};

#endif //PROYECTO_ALIMENTO_H
