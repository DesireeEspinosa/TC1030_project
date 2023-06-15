//
// Created by PC BULLOCK on 15/06/2023.
//

#include "MyApp.h"
#include <iostream>
using namespace std;

void MyApp::crearUsuario(string nombreUsuario) {
    usuario = Usuario(nombreUsuario);
}

void MyApp::registrarDatos() {
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

void MyApp::recomendarMenu() {
    bool seguir = true;
    int sas;
    while (seguir == true) {
        int calorias = usuario.recomendarCalorias();
        cout << "Calorias recomendadas: " << calorias << endl;
        usuario.imprimirMenu();
        cout << "Desea crear otro menu? (1: Si, 0: No) \n";
        cin >> sas;
        if (sas == 0) {
            seguir = false;
        }
    }
}

void MyApp::generarReporte() {
    usuario.verHistorial();
}

void MyApp::menuPrincipal() {
    int opcion;
    bool seguir = true;
    while (seguir == true) {
        cout << "¡Bienvenido a Vida Sana! \n";
        cout << "1. Registrar datos \n";
        cout << "2. Recomendar menu \n";
        cout << "3. Generar reporte \n";
        cout << "4. Salir \n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                registrarDatos();
                break;
            case 2:
                recomendarMenu();
                break;
            case 3:
                generarReporte();
                break;
            case 4:
                seguir = false;
                break;
            default:
                cout << "Opcion invalida \n";
                break;
        }
    }
}