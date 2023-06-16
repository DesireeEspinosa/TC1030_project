//
// Created by PC BULLOCK on 15/06/2023.
//

#include "MyApp.h"
#include <iostream>
#include <chrono>
#include <ctime>
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
    int SAS;
    while (seguir == true) {
        int calorias = usuario.recomendarCalorias();
        cout << "Calorias recomendadas: " << calorias << endl;
        usuario.imprimirMenu();
        cout << "Desea crear otro menu? (1: Si, 0: No) \n";
        cin >> SAS;
        if (SAS == 0) {
            seguir = false;
        }
    }
}

void MyApp::generarReporteCompleto() {
    usuario.verHistorial();
}

void MyApp::generarReporteMensual() {
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

void MyApp::generarReporteDiario() {
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
void MyApp::generarReporteAnual() {
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
                int opcionReporte;
                cout << "Seleccione la opción de reporte que desee \n";
                cout << "1. Reporte completo \n";
                cout << "2. Reporte mensual \n";
                cout << "3. Reporte diario \n";
                cout << "4. Reporte anual \n";
                cout << "5. Reporte calorico \n";
                cin >> opcionReporte;
                switch (opcionReporte) {
                    case 1:
                        generarReporteCompleto();
                        break;
                    case 2:
                        generarReporteMensual();
                        break;
                    case 3:
                        generarReporteDiario();
                        break;
                    case 4:
                        generarReporteAnual();
                        break;
                    case 5:
                        //generarReporteCalorico();
                        break;
                    default:
                        cout << "Opcion invalida \n";
                        break;
                }
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