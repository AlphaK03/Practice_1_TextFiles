//
// Created by Key Cortés on 23/11/2021.
//

#ifndef PROGRA2_PROJECT_2_BRAVO_PERSONA_H
#define PROGRA2_PROJECT_2_BRAVO_PERSONA_H
#include "iostream"

using namespace std;
class Persona {
private:
    int cedula;
    string nombre;
public:
    Persona();

    Persona(int cedula, const string &nombre);

    virtual ~Persona();

    int getCedula() const;

    void setCedula(int cedula);

    const string &getNombre() const;

    void setNombre(const string &nombre);

};


#endif //PROGRA2_PROJECT_2_BRAVO_PERSONA_H
