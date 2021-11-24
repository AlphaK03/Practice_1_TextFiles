//
// Created by Key Cortés on 23/11/2021.
//

#include "Persona.h"

Persona::Persona() {}

Persona::Persona(int cedula, const string &nombre) : cedula(cedula), nombre(nombre) {}

Persona::~Persona() {

}

int Persona::getCedula() const {
    return cedula;
}

void Persona::setCedula(int cedula) {
    Persona::cedula = cedula;
}

const string &Persona::getNombre() const {
    return nombre;
}

void Persona::setNombre(const string &nombre) {
    Persona::nombre = nombre;
}
