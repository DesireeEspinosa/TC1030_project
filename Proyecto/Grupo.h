//
// Created by PC BULLOCK on 12/06/2023.
//

#ifndef PROYECTO_GRUPO_H
#define PROYECTO_GRUPO_H
#include <iostream>
#include <vector>
using namespace std;
#include "Alimento.h"


class Grupo {
    vector<Alimento> alimentos;
    vector<Alimento> verduras;
    vector<Alimento> frutas;
    vector<Alimento> cereales;
    vector<Alimento> lacteos;
    vector<Alimento> carnes;
public:
    Grupo();
    ~Grupo() { };
    void generarGrupo(vector<Alimento> &nombreGrupo, int inicio);
    void printAlimentos();

};


#endif //PROYECTO_GRUPO_H
