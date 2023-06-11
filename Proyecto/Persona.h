//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_PERSONA_H
#define PROYECTO_PERSONA_H
#include <iostream>
using namespace std;


class Persona {
    string nombre;
    int edad;
    float peso;
    float altura;
    string genero;

public:
    Persona() : nombre(""), edad(0), peso(0.0f), altura(0.0f), genero("") {}

    Persona(const std::string& nombre, int edad, float peso, float altura, const std::string& genero)
            : nombre(nombre), edad(edad), peso(peso), altura(altura), genero(genero) {}

    ~Persona() {}

    // Métodos
    float calcularIMC() const;
};


#endif //PROYECTO_PERSONA_H
