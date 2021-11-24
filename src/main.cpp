//
// Created by Key Cortés on 23/11/2021.
//
#include "iostream"
#include "vector"
#include "Trabajador.h"
#include "AdministradorArchivo.h"

int main(){

    AdministradorArchivo adminArchivo;

    vector<Trabajador> listaTrabajadores;
    auto* vehiculo = new Vehiculo("BMW", "2020", 10);
    auto* trabajador = new Trabajador(504350713, "Key Cortes", 200000, 3.5, vehiculo);

    listaTrabajadores.push_back(*trabajador);

    auto* vehiculo1 = new Vehiculo("FORD", "2021", 15);
    auto* trabajador1 = new Trabajador(209380234, "Jess Cortes", 205000, 3.7, vehiculo);

    listaTrabajadores.push_back(*trabajador1);


    auto* vehiculo2 = new Vehiculo("MERCEDES", "2019", 20);
    auto* trabajador2 = new Trabajador(309820782, "Junior Villareal", 250000, 3.0, vehiculo);

    listaTrabajadores.push_back(*trabajador2);

    adminArchivo.escribir(listaTrabajadores);

    cout << adminArchivo.leer();

    return 0;
}