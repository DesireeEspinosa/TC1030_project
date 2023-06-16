//
// Created by PC BULLOCK on 15/06/2023.
//

#include "MyApp.h"
#include <iostream>
#include <chrono>
#include <ctime>
using namespace std;

void MyApp::crearUsuario() {
    string nombreUsuario;
    cout << "Introduzca un identificador de usuario \n";
    cin >> nombreUsuario;
    Usuario* usuario = new Usuario(nombreUsuario);
    this -> usuarios.push_back(usuario);
}

void MyApp::registrarDatos(Usuario usuario) {
    string usuarioNombre;
    float usuarioAltura, usuarioPeso;
    int usuarioEdad;
    cout << "Ingrese su nombre: \n";
    cin >> usuarioNombre;
    cout << "Ingrese su peso: \n";
    cin >> usuarioPeso;
    cout << "Ingrese su altura: \n";
    cin >> usuarioAltura;
    cout << "Ingrese su edad: \n";
    cin >> usuarioEdad;
    usuario.setNombre(usuarioNombre);
    usuario.setPeso(usuarioPeso);
    usuario.setAltura(usuarioAltura);
    usuario.setEdad(usuarioEdad);
}

void MyApp::recomendarMenu(Usuario usuario) {
    bool seguir = true;
    int opcion;
    while (seguir == true) {
        usuario.implementarMenu();
        cout << "Desea crear otro menu? (1: Si, 0: No) \n";
        cin >> opcion;
        if (opcion == 0) {
            seguir = false;
        }
    }
}

void MyApp::generarReporteCompleto(Usuario usuario) {
    usuario.verHistorial();
}

void MyApp::generarReporteMensual(Usuario usuario) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);
    string fechaPeticion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    string mesPeticion = fechaPeticion.substr(0, 3);

    usuario.getMenus();
    for (int i = 0; i < usuario.getMenus().size(); i++) {
        Menu menuActual = usuario.getMenus()[i];
        string fechaMenu = menuActual.getFechaCreacion();
        string mesMenu = fechaMenu.substr(0, 2);
        if (mesMenu == mesPeticion) {
            cout << usuario.getMenus()[i];
        }
    }
}

void MyApp::generarReporteDiario(Usuario usuario) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);
    string fechaPeticion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY

    usuario.getMenus();
    for (int i = 0; i < usuario.getMenus().size(); i++) {
        Menu menuActual = usuario.getMenus()[i];
        string fechaMenu = menuActual.getFechaCreacion();
        if (fechaMenu == fechaPeticion){
            cout << usuario.getMenus()[i];
        }
    }
}
void MyApp::generarReporteAnual(Usuario usuario) {
    time_t tiempoActual = chrono::system_clock::to_time_t(chrono::system_clock::now());
    string strTiempoActual = ctime(&tiempoActual);
    string fechaPeticion = strTiempoActual.substr(4, 7) + strTiempoActual.substr(20, 4); // Mon DD YYYY
    string mesPeticion = fechaPeticion.substr(7, 11);

    usuario.getMenus();
    for (int i = 0; i < usuario.getMenus().size(); i++) {
        Menu menuActual = usuario.getMenus()[i];
        string fechaMenu = menuActual.getFechaCreacion();
        string mesMenu = fechaMenu.substr(7, 11);
        if (mesMenu == mesPeticion) {
            cout << usuario.getMenus()[i];
        }
    }
}
//void MyApp::generarReporteCalorico() {
//    usuario.getMenus();
//    for (int i = 0; i < usuario.getMenus().size(); i++) {
//        Menu menuActual = usuario.getMenus()[i];
//        cout << "El menu que creaste el dia: ";
//        cout << menuActual.getFechaCreacion() << "\n";
//        cout << "A las: ";
//        cout << menuActual.getHoraCreacion() << "\n";
//        int caloriasMenu = menuActual.getCalorias();
//        cout << "Contiene:" << caloriasMenu << "calorias \n";
//    }
//}

void MyApp::menuPrincipal() {
    int opcion;
    bool seguir = true;
    bool existeUsuario = false;
    int usuarioIndex;
    string nombreUsuario;
    while (seguir == true) {
        cout << "¡Bienvenido a Vida Sana! \n";
        cout << "1. Iniciar sesion \n";
        cout << "2. Registrarse \n";
        cout << "3. Salir \n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "Ingrese su nombre de usuario: \n";
                cin >> nombreUsuario; // use variable
                for (int i = 0; i < usuarios.size(); i++) {
                    if (usuarios[i]->getNombreUsuario() == nombreUsuario) {
                        existeUsuario = true;
                        usuarioIndex = i;
                    }
                }
                if (existeUsuario == true) {
                    menuUsuario(*usuarios[usuarioIndex]);
                } else {
                    cout << "El usuario no existe \n";
                }
                break;
            case 2:
                crearUsuario();
                break;
            case 3:
                seguir = false;
                break;
        }
    }
}

void MyApp::menuUsuario(Usuario &usuario) {
    bool seguir = true;
    int opcion;
    while (seguir == true) {
        cout << "1. Registrar datos \n";
        cout << "2. Recomendar menu \n";
        cout << "3. Generar reporte completo \n";
        cout << "4. Generar reporte mensual \n";
        cout << "5. Generar reporte diario \n";
        cout << "6. Generar reporte anual \n";
        cout << "7. Salir \n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarDatos(usuario);
                break;
            case 2:
                recomendarMenu(usuario);
                break;
            case 3:
                generarReporteCompleto(usuario);
                break;
            case 4:
                generarReporteMensual(usuario);
                break;
            case 5:
                generarReporteDiario(usuario);
                break;
            case 6:
                generarReporteAnual(usuario);
                break;
            case 7:
                seguir = false;
                break;
            default:
                cout << "Opcion invalida \n";
                break;
        }
    }
}