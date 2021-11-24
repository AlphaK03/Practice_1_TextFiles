//
// Created by Key Cortés on 23/11/2021.
//

#ifndef PROGRA2_PROJECT_2_BRAVO_TRABAJADOR_H
#define PROGRA2_PROJECT_2_BRAVO_TRABAJADOR_H
#include "Persona.h"
#include "Vehiculo.h"
#include "sstream"

class Trabajador : public Persona{
private:
    int salario;
    double porcDeducTotal;
    Vehiculo *vehiculo;
public:
    Trabajador();

    Trabajador(int cedula, const string &nombre, int salario, double porcDeducTotal, Vehiculo *vehiculo);

    virtual ~Trabajador();

    int getSalario() const;

    void setSalario(int salario);

    double getPorcDeducTotal() const;

    void setPorcDeducTotal(double porcDeducTotal);

    Vehiculo *getVehiculo() const;

    void setVehiculo(Vehiculo *vehiculo);

    string toString();
};


#endif //PROGRA2_PROJECT_2_BRAVO_TRABAJADOR_H
