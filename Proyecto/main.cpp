#include "Alimento.h"
#include <iostream>
#include <vector>
#include <fstream>
#include "Grupo.h"
#include "Persona.h"
#include "Usuario.h"
#include "Menu.h"
#include "MyApp.h"

int main() {
    MyApp app;
    app.crearUsuario("Desiree");
    app.registrarDatos();
    app.recomendarMenu();

    return 0;
}

