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
public:
    Grupo(int, int);
    ~Grupo() { };
    Alimento getAlimento(int i) { return alimentos[i]; }
    void generarGrupo(vector<Alimento> &nombreGrupo, int inicio);
    void printAlimentos();

};


#endif //PROYECTO_GRUPO_H
