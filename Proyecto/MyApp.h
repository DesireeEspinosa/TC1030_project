//
// Created by PC BULLOCK on 15/06/2023.
//

#ifndef PROYECTO_MYAPP_H
#define PROYECTO_MYAPP_H
#include <iostream>
#include "Usuario.h"
using namespace std;

class MyApp {
    //Usuario usuario;
    vector<Usuario*> usuarios;
public:
    MyApp() = default;
    ~MyApp() = default;
    void crearUsuario();
    void registrarDatos(Usuario usuario);
    void recomendarMenu(Usuario usuario);
    void generarReporteCompleto(Usuario usuario);
    void generarReporteMensual(Usuario usuario);
    void generarReporteDiario(Usuario usuario);
    void generarReporteAnual(Usuario usuario);
    //void generarReporteCalorico();
    void menuPrincipal();
    void menuUsuario(Usuario &usuario);
};


#endif //PROYECTO_MYAPP_H
