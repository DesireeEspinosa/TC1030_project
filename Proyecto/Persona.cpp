//
// Created by Desirée Espinosa on 11/06/23.
//

#include "Persona.h"

float Persona::calcularIMC() const {
    // Cálculo del IMC es peso / altura^2
    return peso / (altura * altura);
}
