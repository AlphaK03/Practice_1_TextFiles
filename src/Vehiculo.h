//
// Created by Key Cortés on 23/11/2021.
//

#ifndef PROGRA2_PROJECT_2_BRAVO_VEHICULO_H
#define PROGRA2_PROJECT_2_BRAVO_VEHICULO_H
#include "iostream"

using namespace std;

class Vehiculo {
private:
    string marca;
    string modelo;
    int cilindrada;
public:
    Vehiculo();

    Vehiculo(const string &marca, const string &modelo, int cilindrada);

    virtual ~Vehiculo();

    const string &getMarca() const;

    void setMarca(const string &marca);

    const string &getModelo() const;

    void setModelo(const string &modelo);

    int getCilindrada() const;

    void setCilindrada(int cilindrada);
};


#endif //PROGRA2_PROJECT_2_BRAVO_VEHICULO_H
