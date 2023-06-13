//
// Created by Desirée Espinosa on 11/06/23.
//

#ifndef PROYECTO_PERSONA_H
#define PROYECTO_PERSONA_H
#include <iostream>
using namespace std;


class Persona {
protected:
    string nombre;
    int edad;
    float peso;
    float altura;

public:
    Persona() = default;
    //Persona() : nombre(""), edad(0), peso(0.0f), altura(0.0f) {}

    Persona(const string& nombre, int edad, float peso, float altura)
            : nombre(nombre), edad(edad), peso(peso), altura(altura) {}

    ~Persona() {}

    // Getters
    string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
    float getPeso() const { return peso; }
    float getAltura() const { return altura; }

    // Setters
    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setEdad(int edad) { this->edad = edad; }
    void setPeso(float peso) { this->peso = peso; }
    void setAltura(float altura) { this->altura = altura; }

    // Métodos
    float calcularIMC() const;
};


#endif //PROYECTO_PERSONA_H
