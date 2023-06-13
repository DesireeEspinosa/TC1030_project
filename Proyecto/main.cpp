#include "Alimento.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "Grupo.h"
#include "Persona.h"
#include "Usuario.h"
#include "Menu.h"

int main() {
    Usuario usuario;
    usuario.setNombre("Desiree");
    usuario.setEdad(20);
    usuario.setPeso(50.0f);
    usuario.setAltura(1.60f);
    cout << usuario.calcularIMC();

    return 0;
}

