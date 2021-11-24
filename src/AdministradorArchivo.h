//
// Created by Key Cortés on 23/11/2021.
//

#ifndef PROGRA2_PROJECT_2_BRAVO_ADMINISTRADORARCHIVO_H
#define PROGRA2_PROJECT_2_BRAVO_ADMINISTRADORARCHIVO_H
#include "Trabajador.h"
#include "vector"
#include "fstream"

class AdministradorArchivo {
public:
    void escribir(vector<Trabajador> listaTrabajadores);
    string  leer();
};


#endif //PROGRA2_PROJECT_2_BRAVO_ADMINISTRADORARCHIVO_H
