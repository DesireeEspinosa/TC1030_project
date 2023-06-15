//
// Created by PC BULLOCK on 15/06/2023.
//

#ifndef PROYECTO_MYAPP_H
#define PROYECTO_MYAPP_H
#include <iostream>
#include "Usuario.h"
using namespace std;

class MyApp {
    Usuario usuario;
public:
    MyApp() = default;
    ~MyApp() = default;
    void crearUsuario(string nombreUsuario);
    void registrarDatos();
    void recomendarMenu();


};


#endif //PROYECTO_MYAPP_H
