//
// Created by Key Cortés on 23/11/2021.
//

#include "Trabajador.h"

Trabajador::Trabajador() {}

Trabajador::Trabajador(int cedula, const string &nombre, int salario, double porcDeducTotal, Vehiculo *vehiculo)
        : Persona(cedula, nombre), salario(salario), porcDeducTotal(porcDeducTotal), vehiculo(vehiculo) {}

Trabajador::~Trabajador() {

}

int Trabajador::getSalario() const {
    return salario;
}

void Trabajador::setSalario(int salario) {
    Trabajador::salario = salario;
}

double Trabajador::getPorcDeducTotal() const {
    return porcDeducTotal;
}

void Trabajador::setPorcDeducTotal(double porcDeducTotal) {
    Trabajador::porcDeducTotal = porcDeducTotal;
}

Vehiculo *Trabajador::getVehiculo() const {
    return vehiculo;
}

void Trabajador::setVehiculo(Vehiculo *vehiculo) {
    Trabajador::vehiculo = vehiculo;
}

string Trabajador::toString() {
    stringstream printThis;
    printThis << "DATOS TRABAJADOR:" << endl;
    printThis << "-Nombre: " << getNombre() << endl;
    printThis << "-Cedula: " << getCedula() << endl;
    printThis << "-Salario: " << getSalario() << endl;
    printThis << "-Deduccion porcentual: " << getPorcDeducTotal() << endl;
    printThis << " " << endl;
    printThis << "DATOS DEL VEHICULO: " << endl;
    printThis << "-Marca: " << getVehiculo()->getMarca()<< endl;
    printThis << "-Modelo: " << getVehiculo()->getModelo() << endl;
    printThis << "-Cilindrada: " << getVehiculo()->getCilindrada() << endl;
    return printThis.str();
}
