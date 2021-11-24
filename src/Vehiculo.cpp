//
// Created by Key Cortés on 23/11/2021.
//

#include "Vehiculo.h"

Vehiculo::Vehiculo() {}

Vehiculo::Vehiculo(const string &marca, const string &modelo, int cilindrada) : marca(marca), modelo(modelo),
                                                                                cilindrada(cilindrada) {}

Vehiculo::~Vehiculo() {

}

const string &Vehiculo::getMarca() const {
    return marca;
}

void Vehiculo::setMarca(const string &marca) {
    Vehiculo::marca = marca;
}

const string &Vehiculo::getModelo() const {
    return modelo;
}

void Vehiculo::setModelo(const string &modelo) {
    Vehiculo::modelo = modelo;
}

int Vehiculo::getCilindrada() const {
    return cilindrada;
}

void Vehiculo::setCilindrada(int cilindrada) {
    Vehiculo::cilindrada = cilindrada;
}
