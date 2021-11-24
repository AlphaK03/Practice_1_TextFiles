//
// Created by Key Cortés on 23/11/2021.
//

#include "AdministradorArchivo.h"

void AdministradorArchivo::escribir(vector<Trabajador> listaTrabajadores) {
    ofstream archivo;

    archivo.open("ListaTrabajadores.txt", ios::out); //Abre el archivo y si no existe lo crea

    if(archivo.fail()){
        exit(1);
    }

    for(auto& cont : listaTrabajadores){ //Recorre la lista de trabajadores y ejecuta el toString() de cada uno
        archivo << "-----------------------------" << endl;
        archivo << cont.toString();      //y los guarda en el archivo
    }

    archivo.close();                    //importante siempre cerrar el archivo
}

string AdministradorArchivo::leer() {
    stringstream printThis;
    ifstream archivo;
    string texto;

    archivo.open("C:/Programacion II/Practices/ArchivosTXT/Practice_1_TextFiles/cmake-build-debug/src/ListaTrabajadores.txt");

    if(archivo.fail()){
        exit(1);
    }

    while (!archivo.eof()){
        getline(archivo,texto);
        printThis << texto << endl;
    }
    return printThis.str();
}
